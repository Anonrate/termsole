/**
 *  @file     termsole.c
 *  @brief    termsole.c
 *  @version  v.1
 *  @date     04/19/2017 15:08:26
 *  @author   Anonrate
 *  @copyright
 *    \parblock
 *      GNU General Public License
 *
 *      Copyright (C) 2017 Anonrate
 *
 *      This program is free software: you can redistribute it and/or modify
 *        it under the terms of the GNU General Public License as published by
 *        the Free Software Foundation, either version 3 of the License, or
 *        (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *        but WITHOUT ANY WARRANTY; without even the implied warranty of
 *        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *        GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *        along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *    \endparblock
 */

#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <errno.h>
#include  <limits.h>

#include  "../inc/termsole.h"

#define TERMSOLE_DEV




#ifdef  TERMSOLE_DEV
int
main(void)
{
    logtofile = 1;
    setfilename("termsole");
    setverblvl(TRACE);
    setfileprio(TRACE);
    int n;
    printf("Choose a random number, and I will tell you it: ");
    //getintin(255, &n);
    //printf("Your number was %d!\n", n);
    dellog();
    return EXIT_SUCCESS;
}

void
flushbuf(char *buf)
{
    INFUNC_MSGL(DEBUG);
    buf[strlen(buf) - 1lu] = 0;
}

long long
getlonglonginbase(char *buf, size_t size, long long *pll, int base)
{
    INFUNC_MSGL(DEBUG);

    buf = malloc(size);

    if (!fgets(buf, size, stdin))
    {
        logltffnlf(ERROR, "%s is not a valid long long!\n", buf);

        return R_MSGLLLI(DEBUG, 0ll);
    }

    char *ts;

    errno = 0;
    long long tll = strtoll(buf, &ts, base);
    if (((errno == ERANGE)
                && ((tll == LLONG_MAX) || (tll == LLONG_MIN)))
            || (errno && !tll))
    {
        logltffnlf(FATAL, "%s\n", "strtoll()");
        exit(EXIT_FAILURE);
    }

    if ((ts == buf) && (*ts))
    {
        logltffnlf(ERROR, "%s is not a valid long long!\n", ts);

        return R_MSGLLLI(ERROR, 0ll);
    }

    return R_MSGLLLI(DEBUG, ((*pll) = tll));
}

long long
getlonglongin(char *buf, size_t size, long long *pll)
{
    INFUNC_MSGL(DEBUG);

    long long tll;
    CALLFN_MSGLS(TRACE, "getlonglonginbase()");
    long long trll  = getlonglonginbase(buf, size, &tll, 0);
    (*pll)          = tll;

    return R_MSGLLLI(DEBUG, trll);
}

static long
xgetlonginbase(       char    *buf,
                      size_t  size,
                      long    *pl,
                      int     base,
               const  long    lmax,
               const  long    lmin,
                      char    *emsg)
{
    INFUNC_MSGL(DEBUG);

    buf = malloc(size);

    if (!fgets(buf, size, stdin))
    {
        logltffnlf(ERROR, "%s is not a valid %s!\n", buf, emsg);

        return R_MSGLLLI(DEBUG, 0l);
    }

    char *ts;

    errno = 0;
    long tl = strtol(buf, &ts, base);
    if (((errno == ERANGE)
                && ((tl == lmax) || (tl == lmin)))
            || (errno && !tl))
    {
        logltffnlf(FATAL, "%s\n", "strtol()");
        exit(EXIT_FAILURE);
    }

    if ((ts == buf) && (*ts))
    {
        logltffnlf(ERROR, "%s is not a valid %s!\n", ts, emsg);

        return R_MSGLLI(ERROR, 0l);
    }

    return R_MSGLLI(DEBUG, ((*pl) = tl));
}

long
getlonginbase(char *buf, size_t size, long *pl, int base)
{
    INFUNC_MSGL(DEBUG);

    long tl;
    CALLFN_MSGLS(TRACE, "xgetlonginbase()");
    long trl  =
        xgetlonginbase(buf, size, &tl, base, LONG_MAX, LONG_MIN, "long");
    (*pl)     = tl;

    return R_MSGLLI(DEBUG, trl);
}

long
getlongin(char *buf, size_t size, long *pl)
{
    INFUNC_MSGL(DEBUG);

    long tl;
    CALLFN_MSGLS(TRACE, "getlonginbase()");
    long trl  = getlonginbase(buf, size, &tl, 0);
    (*pl)     = tl;

    return R_MSGLLI(DEBUG, trl);
}

int
getintinbase(char *buf, size_t size, int *pn, int base)
{
    INFUNC_MSGL(DEBUG);

    int tn;
    CALLFN_MSGLS(TRACE, "xgetlonginbase()");
    int trn =
        (int)xgetlonginbase(buf,
                            size,
                            (long*)&tn,
                            base,
                            INT_MAX,
                            INT_MIN,
                            "int");
    (*pn)   = tn;

    return R_MSGLD(DEBUG, trn);
}

int
getintin(char *buf, size_t size, int *pn)
{
    INFUNC_MSGL(DEBUG);

    int tn;
    CALLFN_MSGLS(TRACE, "getintinsb()");
    int trn = getintinbase(buf, size, &tn, 0);
    (*pn)   = tn;

    return R_MSGLD(DEBUG, trn);
}

#endif  /* TERMOSLE_DEV */
