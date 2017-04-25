/**
 *  @file     bgcols.h
 *  @brief    bgcols.h
 *  @version  v.1
 *  @date     04/19/2017 19:49:45
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

#ifndef BGCOLS_H
#define BGCOLS_H

#include  "enums/bgcolenum.h"

static enum bgcol   lstbgc   = BG_DEF;

static inline int
setbgc(enum bgcol bgcolor)
{
    INFUNC_MSGL(DEBUG);
    switch (bgcolor)
    {
        case BG_DEF:
        case BG_BLACK:
        case BG_RED:
        case BG_GREEN:
        case BG_YELLOW:
        case BG_BLUE:
        case BG_MAGENTA:
        case BG_CYAN:
        case BG_LIGHT_GRAY:
        case BG_DARK_GRAY:
        case BG_LIGHT_RED:
        case BG_LIGHT_GREEN:
        case BG_LIGHT_YELLOW:
        case BG_LIGHT_BLUE:
        case BG_LIGHT_MAGENTA:
        case BG_LIGHT_CYAN:
        case BG_WHITE:
            SET_MSGLUU(INFO, lstbgc, bgcolor);
            lstbgc = bgcolor;
            printf("\e[%um", bgcolor);

            return R_MSGLD(DEBUG, (int)bgcolor);
        default:
            logltffnlf(WARNING, "%u is not a valid bgcol!\n", bgcolor);

            return R_MSGLD(WARNING, 0);
    }
}

static inline int
setbgcdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_DEF);

//    return (R_MSGLD(DEBUG, (CALLFN_MSGLS(TRACE), setbgc(BG_DEF))));
    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_BLACK);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_RED);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_GREEN);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_YELLOW);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_BLUE);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_MAGENTA);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgccyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_CYAN);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_GRAY);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_DARK_GRAY);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_RED);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_GREEN);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_YELLOW);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_BLUE);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_MAGENTA);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgclightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_CYAN);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}

static inline int
setbgcwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_WHITE);

    return R_MSGLD(tn ? DEBUG : ERROR, tn);
}
#endif  /* BGCOLS_H */
