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
fmtset {
    S_BOLD        = 1u,
    S_DIM         = 2u,
    S_UNDERLINED  = 4u,
    S_BLINK       = 5u,
    S_REVERSE     = 7u,
    S_HIDDEN      = 8u
};

enum
fmtreset {
    RS_ALL        = 0u,
    RS_BOLD       = 21u,
    RS_DIM        = 22u,
    RS_UNDERLINED = 24u,
    RS_BLINK      = 25u,
    RS_REVERSE    = 27u,
    RS_HIDDEN     = 28u
};

void
setfmt(enum fmtset sfmt)
{
    INFUNC_MSGL(DEBUG);
    if (sfmt == S_BOLD) {
        SET_MSGLDD(INFO, lstfmts.fmtbold, (lstfmts.fmtbold = 1));
    } else if (sfmt == S_DIM) {
        SET_MSGLDD(INFO, lstfmts.fmtdim, (lstfmts.fmtdim = 1));
    } else if (sfmt == S_UNDERLINED) {
        SET_MSGLDD(INFO, lstfmts.fmtunderlined, (lstfmts.fmtunderlined = 1));
    } else if (sfmt == S_BLINK) {
        SET_MSGLDD(INFO, lstfmts.fmtblink, (lstfmts.fmtblink = 1));
    } else if (sfmt == S_REVERSE) {
        SET_MSGLDD(INFO, lstfmts.fmtreverse, (lstfmts.fmtreverse = 1));
    } else if (sfmt == S_HIDDEN) {
        SET_MSGLDD(INFO, lstfmts.fmthidden, (lstfmts.fmthidden = 1));
    }
    else
    {
        logltffnlf(WARNING, "%u is not a valid fmt!\n", sfmt);

        return;
    }

    printf("\e[%um", sfmt);
}

void
setbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_BOLD);
}

void
setdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_DIM);
}

void
setunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_UNDERLINED);
}

void
setblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_BLINK);
}

void
setreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_REVERSE);
}

void
sethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(S_HIDDEN);
}

void
resetfmt(enum fmtreset rsfmtorsfmt)
{
    INFUNC_MSGL(DEBUG);
    if (rsfmtorsfmt == RS_ALL)
    {
        printf("\e[%um", RS_ALL);
        lstfmts.fmtbold       =
        lstfmts.fmtdim        =
        lstfmts.fmtunderlined =
        lstfmts.fmtblink      =
        lstfmts.fmtreverse    =
        lstfmts.fmthidden     = 0;

        return;
    }

    switch (rsfmtorsfmt)
    {
        case S_BOLD:
        case RS_BOLD:
            SET_MSGLDD(INFO, lstfmts.fmtbold, (lstfmts.fmtbold = 0));
            printf("\e[%um", RS_BOLD);

            break;
        case S_DIM:
        case RS_DIM:
            SET_MSGLDD(INFO, lstfmts.fmtdim, (lstfmts.fmtdim = 0));
            printf("\e[%um", RS_DIM);

            break;
        case S_UNDERLINED:
        case RS_UNDERLINED:
            SET_MSGLDD(INFO,
                       lstfmts.fmtunderlined,
                       (lstfmts.fmtunderlined = 0));
            printf("\e[%um", RS_UNDERLINED);

            break;
        case S_BLINK:
        case RS_BLINK:
            SET_MSGLDD(INFO, lstfmts.fmtblink, (lstfmts.fmtblink = 0));
            printf("\e[%um", RS_BLINK);

            break;
        case S_REVERSE:
        case RS_REVERSE:
            SET_MSGLDD(INFO, lstfmts.fmtreverse, (lstfmts.fmtreverse = 0));
            printf("\e[%um", RS_REVERSE);

            break;
        case S_HIDDEN:
        case RS_HIDDEN:
            SET_MSGLDD(INFO, lstfmts.fmthidden, (lstfmts.fmthidden = 0));
            printf("\e[%um", RS_HIDDEN);

            break;
        default:
            logltffnlf(WARNING, "%u is not a valid resetfmt!\n", rsfmtorsfmt);

            break;
    }
}

void
resetall(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_ALL);
}


void
resetbold(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_BOLD);
}

void
resetdim(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_DIM);
}

void
resetunderlined(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_UNDERLINED);
}

void
resetblink(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_BLINK);
}

void
resetreverse(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_REVERSE);
}

void
resethidden(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetfmt()");
    setfmt(RS_HIDDEN);
}
#endif  /* FORMATS_H */
