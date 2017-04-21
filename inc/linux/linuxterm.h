/**
 *  @file     linuxterm.h
 *  @brief    linuxterm.h
 *  @version  v.1
 *  @date     04/19/2017 19:53:12
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

#ifndef LINUXTERM_H
#define LINUXTERM_H

#include  "cntrlseq/formats.h"
#include  "cntrlseq/fgcols.h"
#include  "cntrlseq/bgcols.h"

static inline int
swapfgbgc(void)
{
    INFUNC_MSGL(DEBUG);
    enum fgcol tfgc = lstfgc;

    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(lstbgc - 10u);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(tfgc + 10u);
}

static inline int
setfgbgc(enum fgcol fgc, enum bgcol bgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);
}

static inline int
setfmtfgbgc(enum fmtset fmt, enum fgcol fgc, enum bgcol bgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);
}

static inline void
setfmtfgc(enum fmtset fmt, enum fgcol fgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);
}

static inline int
setfmtbgc(enum fmtset fmt, enum bgcol bgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);
}

static inline int
resetfgbgc(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgcdef()");
    setfgcdef();

    CALLFN_MSGLS(TRACE, "setbgcdef()");
    setbgcdef();
}

static inline int
resetall(void)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "resetallfmt()");
    resetallfmt();

    CALLFN_MSGLS(TRACE, "setfgcdef()");
    setfgcdef();

    CALLFN_MSGLS(TRACE, "setbgcdef()");
    setbgcdef();

}
#endif  /* LINUXTERM_H */
