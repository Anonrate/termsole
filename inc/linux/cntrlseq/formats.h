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

#include  "enums/formatenum.h"

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

        return R_MSGLD(WARNING, -1);
    }

    printf("\e[%um", fmt);

    SET_MSGLUU(INFO, defattrb.fmt, fmt);
    defattrb.fmt = fmt;

    return R_MSGLD(DEBUG, (int)fmt);
}

static inline int
setbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_BOLD);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
setdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_DIM);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
setunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_UNDERLINED);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
setblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_BLINK);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
setreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_REVERSE);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
sethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    int tn = setfmt(S_HIDDEN);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
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

        SET_MSGLUU(INFO, defattrb.fmt, rsfmtorfmt);
        defattrb.fmt = rsfmtorfmt;

        return R_MSGLD(DEBUG, (int)rsfmtorfmt);
    }

    switch (rsfmtorfmt)
    {
        case S_BOLD:
        case RS_BOLD:
            SET_MSGLDD(INFO, lstfmts.fmtbold, 0);
            lstfmts.fmtbold       = 0;

            printf("\e[%um", RS_BOLD);

            SET_MSGLUU(INFO, defattrb.fmt, RS_BOLD);
            defattrb.fmt          = RS_BOLD;

            break;
        case S_DIM:
        case RS_DIM:
            SET_MSGLDD(INFO, lstfmts.fmtdim, 0);
            lstfmts.fmtdim        = 0;

            printf("\e[%um", RS_DIM);

            SET_MSGLUU(INFO, defattrb.fmt, RS_DIM);
            defattrb.fmt          = RS_DIM;

            break;
        case S_UNDERLINED:
        case RS_UNDERLINED:
            SET_MSGLDD(INFO, lstfmts.fmtunderlined, 0);
            lstfmts.fmtunderlined = 0;

            printf("\e[%um", RS_UNDERLINED);

            SET_MSGLUU(INFO, defattrb.fmt, RS_UNDERLINED);
            defattrb.fmt          = RS_UNDERLINED;

            break;
        case S_BLINK:
        case RS_BLINK:
            SET_MSGLDD(INFO, lstfmts.fmtblink, 0);
            lstfmts.fmtblink      = 0;

            printf("\e[%um", RS_BLINK);

            SET_MSGLUU(INFO, defattrb.fmt, RS_BLINK);
            defattrb.fmt          = RS_BLINK;

            break;
        case S_REVERSE:
        case RS_REVERSE:
            SET_MSGLDD(INFO, lstfmts.fmtreverse, 0);
            lstfmts.fmtreverse    = 0;

            printf("\e[%um", RS_REVERSE);

            SET_MSGLUU(INFO, defattrb.fmt, RS_REVERSE);
            defattrb.fmt          = RS_REVERSE;

            break;
        case S_HIDDEN:
        case RS_HIDDEN:
            SET_MSGLDD(INFO, lstfmts.fmthidden, 0);
            lstfmts.fmthidden     = 0;

            printf("\e[%um", RS_HIDDEN);

            SET_MSGLUU(INFO, defattrb.fmt, RS_HIDDEN);
            defattrb.fmt          = RS_HIDDEN;

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid rsetfmt!\n", rsfmtorfmt);

            return R_MSGLD(WARNING, -1);
    }

    return R_MSGLD(DEBUG, (int)rsfmtorfmt);
}

static inline int
resetallfmt(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_ALL);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}


static inline int
resetbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_BOLD);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
resetdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_DIM);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
resetunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_UNDERLINED);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
resetblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_BLINK);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
resetreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_REVERSE);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
resethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "rsetfmt()");
    int tn = resetfmt(RS_HIDDEN);

    return R_MSGLD(tn < 0 ? ERROR : DEBUG, tn);
}

static inline int
isboldset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmtbold);
}

static inline int
isdimset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmtdim);
}

static inline int
isunderlinedset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmtunderlined);
}

static inline int
isblinkset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmtblink);
}

static inline int
isreverseset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmtreverse);
}

static inline int
ishiddenset(void)
{
    INFUNC_MSGL(DEBUG);

    return R_MSGLD(DEBUG, lstfmts.fmthidden);
}
#endif  /* FORMATS_H */
