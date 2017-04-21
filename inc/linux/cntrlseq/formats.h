/**
 *  @file     formats.h
 *  @brief    formats.h
 *  @version  v.1
 *  @date     04/19/2017 19:44:26
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

#ifndef FORMATS_H
#define FORMATS_H

struct
fmts {
    int fmtbold;
    int fmtdim;
    int fmtunderlined;
    int fmtblink;
    int fmtreverse;
    int fmthidden;
};

static struct fmts lstfmts = { 0, 0, 0, 0, 0, 0 };

enum
allfmts {
    xS_BOLD         = 1u,
    xS_DIM          = 2u,
    xS_UNDERLINED   = 4u,
    xS_BLINK        = 5u,
    xS_REVERSE      = 7u,
    xS_HIDDEN       = 8u,
    xRS_ALL         = 0u,
    xRS_BOLD        = 21u,
    xRS_DIM         = 22u,
    xRS_UNDERLINED  = 24u,
    xRS_BLINK       = 25u,
    xRS_REVERSE     = 27u,
    xRS_HIDDEN      = 28u
};

enum
fmtset {
    S_BOLD        = xS_BOLD,
    S_DIM         = xS_DIM,
    S_UNDERLINED  = xS_UNDERLINED,
    S_BLINK       = xS_BLINK,
    S_REVERSE     = xS_REVERSE,
    S_HIDDEN      = xS_HIDDEN
};

enum
fmtreset {
    RS_ALL        = xRS_ALL,
    RS_BOLD       = xRS_BOLD,
    RS_DIM        = xRS_DIM,
    RS_UNDERLINED = xRS_UNDERLINED,
    RS_BLINK      = xRS_BLINK,
    RS_REVERSE    = xRS_REVERSE,
    RS_HIDDEN     = xRS_HIDDEN
};

/**
 * @return  Retruns \c -1 if fail.
 */
static inline int
setfmt(enum fmtset fmt)
{
    INFUNC_MSGL(DEBUG);
    if (fmt == S_BOLD)
    {
        SET_MSGLDD(INFO, lstfmts.fmtbold, 1);
        lstfmts.fmtbold       = 1;
    }
    else if (fmt == S_DIM)
    {
        SET_MSGLDD(INFO, lstfmts.fmtdim, 1);
        lstfmts.fmtdim        = 1;
    }
    else if (fmt == S_UNDERLINED)
    {
        SET_MSGLDD(INFO, lstfmts.fmtunderlined, 1);
        lstfmts.fmtunderlined = 1;
    }
    else if (fmt == S_BLINK)
    {
        SET_MSGLDD(INFO, lstfmts.fmtblink, 1);
        lstfmts.fmtblink      = 1;
    }
    else if (fmt == S_REVERSE)
    {
        SET_MSGLDD(INFO, lstfmts.fmtreverse, 1);
        lstfmts.fmtreverse    = 1;
    }
    else if (fmt == S_HIDDEN)
    {
        SET_MSGLDD(INFO, lstfmts.fmthidden, 1);
        lstfmts.fmthidden     = 1;
    }
    else
    {
        logltffnlf(WARNING, "%u is not a valid fmt!\n", fmt);

        R_MSGLD(WARNING, -1);
        return -1;
    }

    printf("\e[%um", fmt);

    R_MSGLU(DEBUG, fmt);
    return (int)fmt;
}

static inline int
setbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_BOLD);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
setdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_DIM);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
setunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_UNDERLINED);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
setblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_BLINK);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
setreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_REVERSE);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
sethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_HIDDEN);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resetfmt(enum allfmts rsfmtorfmt)
{
    INFUNC_MSGL(DEBUG);
    if (!rsfmtorfmt)
    {
        printf("\e[%um", rsfmtorfmt);
        lstfmts.fmtbold       =
        lstfmts.fmtdim        =
        lstfmts.fmtunderlined =
        lstfmts.fmtblink      =
        lstfmts.fmtreverse    =
        lstfmts.fmthidden     = 0;

        R_MSGLU(DEBUG, rsfmtorfmt)
        return (int)rsfmtorfmt;
    }

    switch (rsfmtorfmt)
    {
        case S_BOLD:
        case RS_BOLD:
            SET_MSGLDD(INFO, lstfmts.fmtbold, 0);
            lstfmts.fmtbold       = 0;
            printf("\e[%um", RS_BOLD);

            break;
        case S_DIM:
        case RS_DIM:
            SET_MSGLDD(INFO, lstfmts.fmtdim, 0);
            lstfmts.fmtdim        = 0;
            printf("\e[%um", RS_DIM);

            break;
        case S_UNDERLINED:
        case RS_UNDERLINED:
            SET_MSGLDD(INFO, lstfmts.fmtunderlined, 0);
            lstfmts.fmtunderlined = 0;
            printf("\e[%um", RS_UNDERLINED);

            break;
        case S_BLINK:
        case RS_BLINK:
            SET_MSGLDD(INFO, lstfmts.fmtblink, 0);
            lstfmts.fmtblink      = 0;
            printf("\e[%um", RS_BLINK);

            break;
        case S_REVERSE:
        case RS_REVERSE:
            SET_MSGLDD(INFO, lstfmts.fmtreverse, 0);
            lstfmts.fmtreverse    = 0;
            printf("\e[%um", RS_REVERSE);

            break;
        case S_HIDDEN:
        case RS_HIDDEN:
            SET_MSGLDD(INFO, lstfmts.fmthidden, 0);
            lstfmts.fmthidden     = 0;
            printf("\e[%um", RS_HIDDEN);

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid rsetfmt!\n", rsfmtorfmt);

            R_MSGLD(WARNING, -1);
            return -1;
    }

    R_MSGLU(DEBUG, rsfmtorfmt);
    return (int)rsfmtorfmt;
}

static inline int
resetallfmt(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_ALL);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}


static inline int
resetbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_BOLD);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resetdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_DIM);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resetunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_UNDERLINED);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resetblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_BLINK);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resetreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_REVERSE);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
resethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = setfmt(RS_HIDDEN);

    R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
    return tn;
}

static inline int
isboldset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmtbold);
    return lstfmts.fmtbold;
}

static inline int
isdimset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmtdim);
    return lstfmts.fmtdim;
}

static inline int
isunderlinedset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmtunderlined);
    return lstfmts.fmtunderlined;
}

static inline int
isblinkset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmtblink);
    return lstfmts.fmtblink;
}

static inline int
isreverseset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmtreverse);
    return lstfmts.fmtreverse;
}

static inline int
ishiddenset(void)
{
    INFUNC_MSGL(DEBUG);

    R_MSGLD(DEBUG, lstfmts.fmthidden);
    return lstfmts.fmthidden;
}
#endif  /* FORMATS_H */
