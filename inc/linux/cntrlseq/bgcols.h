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

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid bgcol!\n", bgcolor);

            break;
    }
}

void
setbgcdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_DEF);
}

void
setbgcblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_BLACK);
}

void
setbgcred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_RED);
}

void
setbgcgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_GREEN);
}

void
setbgcyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_YELLOW);
}

void
setbgcblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_BLUE);
}

void
setbgcmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_MAGENTA);
}

void
setbgccyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_CYAN);
}

void
setbgclightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_GRAY);
}

void
setbgcdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_DARK_GRAY);
}

void
setbgclightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_RED);
}

void
setbgclightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_GREEN);
}

void
setbgclightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_YELLOW);
}

void
setbgclightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_BLUE);
}

void
setbgclightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_MAGENTA);
}

void
setbgclightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_LIGHT_CYAN);
}

void
setbgcwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(BG_WHITE);
}
#endif  /* BGCOLS_H */
