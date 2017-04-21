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

enum
bgcol {
    BG_DEF            = 49u,
    BG_BLACK          = 40u,
    BG_RED            = 41u,
    BG_GREEN          = 42u,
    BG_YELLOW         = 43u,
    BG_BLUE           = 44u,
    BG_MAGENTA        = 45u,
    BG_CYAN           = 46u,
    BG_LIGHT_GRAY     = 47u,
    BG_DARK_GRAY      = 100u,
    BG_LIGHT_RED      = 101u,
    BG_LIGHT_GREEN    = 102u,
    BG_LIGHT_YELLOW   = 103u,
    BG_LIGHT_BLUE     = 104u,
    BG_LIGHT_MAGENTA  = 105u,
    BG_LIGHT_CYAN     = 106u,
    BG_WHITE          = 107u
};

static enum bgcol   lstbgc   = BG_DEF;

void
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

            R_MSGLU(DEBUG, bgcolor);
            return (int)bgcolor;
        default:
            logltffnlf(WARNING, "%u is not a valid bgcol!\n", bgcolor);

            R_MSGLD(WARNING, 0);
            return 0;
    }
}

static inline void
setbgcdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_DEF);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_BLACK);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_RED);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_GREEN);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_YELLOW);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_BLUE);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_MAGENTA);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgccyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_CYAN);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_GRAY);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_DARK_GRAY);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_RED);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_GREEN);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_YELLOW);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_BLUE);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_MAGENTA);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgclightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_LIGHT_CYAN);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}

static inline void
setbgcwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    int tn = setbgc(BG_WHITE);

    R_MSGLD(tn ? DEBUG : ERROR, tn);
    return tn;
}
#endif  /* BGCOLS_H */
