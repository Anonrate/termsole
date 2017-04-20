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

static enum fgcol   lstfg   = FG_DEF;

void
fgset(enum fgcol fgcolor)
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
            SET_MSGLUU(INFO, lstbg, (lstfg = fgcolor));
            printf("\e[%um", fgcolor);

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid fgcol!\n", fgcolor);

            break;
    }
}

void
fgsetdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_DEF);
}

void
fgsetblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_BLACK);
}

void
fgsetred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_RED);
}

void
fgsetgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_GREEN);
}

void
fgsetyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_YELLOW);
}

void
fgsetblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_BLUE);
}

void
fgsetmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_MAGENTA);
}

void
fgsetcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_CYAN);
}

void
fgsetlightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_GRAY);
}

void
fgsetdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_DARK_GRAY);
}

void
fgsetlightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_RED);
}

void
fgsetlightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_GREEN);
}

void
fgsetlightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_YELLOW);
}

void
fgsetlightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_BLUE);
}

void
fgsetlightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_MAGENTA);
}

void
fgsetlightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_LIGHT_CYAN);
}

void
fgsetwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "fgset()");
    fgset(FG_WHITE);
}
#endif  /* FGCOLS_H */