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
bgcset(enum bgcol bgcolor)
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
            SET_MSGLUU(INFO, lstbgc, (lstbgc = bgcolor));
            printf("\e[%um", bgcolor);

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid bgcol!\n", bgcolor);

            break;
    }
}

void
bgcsetdef(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_DEF);
}

void
bgcsetblack(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_BLACK);
}

void
bgcsetred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_RED);
}

void
bgcsetgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_GREEN);
}

void
bgcsetyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_YELLOW);
}

void
bgcsetblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_BLUE);
}

void
bgcsetmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_MAGENTA);
}

void
bgcsetcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_CYAN);
}

void
bgcsetlightgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_GRAY);
}

void
bgcsetdarkgray(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_DARK_GRAY);
}

void
bgcsetlightred(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_RED);
}

void
bgcsetlightgreen(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_GREEN);
}

void
bgcsetlightyellow(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_YELLOW);
}

void
bgcsetlightblue(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_BLUE);
}

void
bgcsetlightmagenta(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_MAGENTA);
}

void
bgcsetlightcyan(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_LIGHT_CYAN);
}

void
bgcsetwhite(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "bgcset()");
    bgcset(BG_WHITE);
}
#endif  /* BGCOLS_H */
