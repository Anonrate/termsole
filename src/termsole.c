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
    getintin(255, &n);
    printf("Your number was %d!\n", n);
    dellog();
    return EXIT_SUCCESS;
}

void
flushbuf(char *buf)
{
    INFUNC_MSGL(DEBUG);
    buf[strlen(buf) - 1lu] = 0;
}

int
getintin(long maxbuf, int *pn)
{
    INFUNC_MSGL(DEBUG);

    char *buf = malloc(maxbuf);

    if (!buf)
    {
        logltffnlf(WARNING, "%s\n", "'buf can not be 0...'");

        return R_MSGLD(WARNING, 1);
    }

    if (!fgets(buf, maxbuf, stdin))
    {
        logltffnlf(ERROR, "%s is not a valid int!\n", buf);

        return R_MSGLD(DEBUG, 0);
    }

    CALLFN_MSGLS(TRACE, "flushbuf()");
    flushbuf(buf);

    char *ts;

    errno = 0;
    int tn = strtol(buf, &ts, 10);
    if ((errno == ERANGE
                && (tn == LONG_MAX || tn == LONG_MIN))
            || (errno && !tn))
    {
        logltffnlf(FATAL, "%s\n", "strtol()");
        exit(EXIT_FAILURE);
    }

    if (ts == buf && *ts != '\0')
    {
        logltffnlf(ERROR, "%s is not a integer!\n", ts);

        return R_MSGLD(ERROR, 0);
    }

    return R_MSGLD(DEBUG, ((*pn) = tn));
}

#endif  /* TERMOSLE_DEV */
