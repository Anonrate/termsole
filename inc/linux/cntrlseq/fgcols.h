/**
 *  @file     fgcols.h
 *  @brief    fgcols.h
 *  @version  v.1
 *  @date     04/19/2017 19:47:11
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

#ifndef FGCOLS_H
#define FGCOLS_H

enum
fgcol {
    FG_DEF            = 39u,
    FG_BLACK          = 30u,
    FG_RED            = 31u,
    FG_GREEN          = 32u,
    FG_YELLOW         = 33u,
    FG_BLUE           = 34u,
    FG_MAGENTA        = 35u,
    FG_CYAN           = 36u,
    FG_LIGHT_GRAY     = 37u,
    FG_DARK_GRAY      = 90u,
    FG_LIGHT_RED      = 91u,
    FG_LIGHT_GREEN    = 92u,
    FG_LIGHT_YELLOW   = 93u,
    FG_LIGHT_BLUE     = 94u,
    FG_LIGHT_MAGENTA  = 95u,
    FG_LIGHT_CYAN     = 96u,
    FG_WHITE          = 97u
};

static enum fgcol   lstfgc   = FG_DEF;

static inline int
setfgc(enum fgcol fgcolor)
{
    INFUNC_MSGL(DEBUG);
    switch (fgcolor)
    {
        case FG_DEF:
        case FG_BLACK:
        case FG_RED:
        case FG_GREEN:
        case FG_YELLOW:
        case FG_BLUE:
        case FG_MAGENTA:
        case FG_CYAN:
        case FG_LIGHT_GRAY:
        case FG_DARK_GRAY:
        case FG_LIGHT_RED:
        case FG_LIGHT_GREEN:
        case FG_LIGHT_YELLOW:
        case FG_LIGHT_BLUE:
        case FG_LIGHT_MAGENTA:
        case FG_LIGHT_CYAN:
        case FG_WHITE:
            SET_MSGLUU(INFO, lstfgc, fgcolor);
            lstfgc = fgcolor;
            printf("\e[%um", fgcolor);

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid fgcol!\n", fgcolor);

            break;
    }
}

static inline int
setfgcdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_DEF);
}

static inline int
setfgcblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_BLACK);
}

static inline int
setfgcred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_RED);
}

static inline int
setfgcgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_GREEN);
}

static inline int
setfgcyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_YELLOW);
}

static inline int
setfgcblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_BLUE);
}

static inline int
setfgcmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_MAGENTA);
}

static inline int
setfgccyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_CYAN);
}

static inline int
setfgclightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_GRAY);
}

static inline int
setfgcdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_DARK_GRAY);
}

static inline int
setfgclightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_RED);
}

static inline int
setfgclightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_GREEN);
}

static inline int
setfgclightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_YELLOW);
}

static inline int
setfgclightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_BLUE);
}

static inline int
setfgclightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_MAGENTA);
}

static inline int
setfgclightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_LIGHT_CYAN);
}

static inline int
setfgcwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(FG_WHITE);
}
#endif  /* FGCOLS_H */
