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

/**
 *  @returns  If \c setfgc() and \c setbgc() succeed, \c 7 is returned.\n
 *            If \c setfgc() succeeds and \c setbgc() fail, \c 2 is
 *              returned.\n
 *            If \c setfgc() fails and \c setbgc() succeeds, \c 3 is
 *              returned.\n
 *            If \c setfgc() and \c setbgc() fail, \c 0 will be returned.
 */
static inline int
swapfgbgc(void)
{
    INFUNC_MSGL(DEBUG);
    enum fgcol tfgc = lstfgc;

    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(lstbgc - 10u);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(tfgc + 10u);

    return 0;
}

/**
 *  @returns  If \c setfgc() and \c setbgc() succeed, \c 7 is returned.\n
 *            If \c setfgc() succeeds and \c setbgc() fail, \c 2 is
 *              returned.\n
 *            If \c setfgc() fails and \c setbgc() succeeds, \c 3 is
 *              returned.\n
 *            If \c setfgc() and \c setbgc() fail, \c 0 will be returned.
 */
static inline int
setfgbgc(enum fgcol fgc, enum bgcol bgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);

    return 0;
}

/**
 *  @returns  If \c setfmt(), \c setfgc() and \c setbgc() succeed, \c 8 is
 *              returned.\n
 *            If \c setfmt() succeeds, and \c setfgc() and \c setbgc() fail,
 *              \c 1 is returned.\n
 *            If \c setfmt() fails, \c setfgc() succeeds and \c setbgc()
 *              fails, \c 2 is returned.\n
 *            If \c setfmt(), \c setfgc() both fail, and \c setbgc() succeeds,
 *              \c 3 is returned.\n
 *            If \c setfmt(), \c setgfc() both succeed, and \c setbgc() fails,
 *              \c 5 is returned.\n
 *            If \c setfmt() succeeds, setfgc() fails and setbgc() succeeds,
 *              \c 6 is returned.\n
 *            If \c setfmt() fails, \c setfgc(), \c setbgc() both succeed, \c
 *              7 is returned.\n
 *            If \c setfmt(), \c setfgc() and \c setbgc() fail, \c 0 is
 *              returned.
 */
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

    return 0;
}

/**
 *  @returns  If \c setfmt() and \c setfgc() succeed, \c 5 is returned.\n
 *            If \c setfmt() succeeds and \c setfgc() fail, \c 1 is
 *              returned.\n
 *            If \c setfmt() fails and \c setfgc() succeeds, \c 2 is
 *              returned.\n
 *            If \c setfgc() and \c setbgc() fail, \c 0 will be returned.
 */
static inline int
setfmtfgc(enum fmtset fmt, enum fgcol fgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    return 0;
}

/**
 *  @returns  If \c setfmt() and \c setbgc() succeed, \c 6 is returned.\n
 *            If \c setfmt() succeeds and \c setbgc() fail, \c 1 is
 *              returned.\n
 *            If \c setfmt() fails and \c setbgc() succeeds, \c 3 is
 *              returned.\n
 *            If \c setfgc() and \c setbgc() fail, \c 0 will be returned.
 */
static inline int
setfmtbgc(enum fmtset fmt, enum bgcol bgc)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);

    return 0;
}

/**
 *  @returns  If \c setfgcdef() and \c setbgcdef() succeed, \c 7 is
 *              returned.\n
 *            If \c setfgcdef() succeeds and \c setbgcdef() fail, \c 2 is
 *              returned.\n
 *            If \c setfgcdef() fails and \c setbgcdef() succeeds, \c 3 is
 *              returned.\n
 *            If \c setfgcdef() and \c setbgcdef() fail, \c 0 will be
 *              returned.
 */
static inline int
resetfgbgc(void)
{
    INFUNC_MSGL(DEBUG);

    int tn = 0;
    CALLFN_MSGLS(TRACE, "setfgcdef()");
    tn += (setfgcdef() ? 2 : 0);

    CALLFN_MSGLS(TRACE, "setbgcdef()");
    tn += (setbgcdef()
            ? (tn
                ? (3 + 2)
                : 3)
            : 0);

    return tn;
}
/**
 *  @returns  If \c resetallfmt(), \c setfgcdef() and \c setbgcdef() succeed,
 *              \c 8 is returned.\n
 *            If \c resetallfmt() succeeds, and \c setfgcdef() and \c
 *              setbgcdef() fail, \c 1 is returned.\n
 *            If \c resetallfmt() fails, \c setfgcdef() succeeds and \c
 *              setbgcdef() fails, \c 2 is returned.\n
 *            If \c resetallfmt(), \c setfgcdef() both fail, and \c
 *              setbgcdef() succeeds, \c 3 is returned.\n
 *            If \c resetallfmt(), \c setgfcdef() both succeed, and \c
 *              setbgcdef() fails, \c 5 is returned.\n
 *            If \c resetallfmt() succeeds, setfgcdef() fails and setbgcdef()
 *              succeeds, \c 6 is returned.\n
 *            If \c resetallfmt() fails, \c setfgcdef(), \c setbgcdef() both
 *              succeed, \c 7 is returned.\n
 *            If \c resetallfmt(), \c setfgcdef() and \c setbgcdef() fail, \c
 *              0 is returned.
 */
static inline int
resetall(void)
{
    INFUNC_MSGL(DEBUG);

    int tn = 0;
    CALLFN_MSGLS(TRACE, "resetallfmt()");
    tn += (resetallfmt() >= 0 ? 1 : 0);

    printf("%d\n", tn);
    CALLFN_MSGLS(TRACE, "setfgcdef()");
    tn += (setfgcdef()
            ? (tn
                ? (tn++ + 2)
                : 2)
            : 0);

    printf("%d\n", tn);
    CALLFN_MSGLS(TRACE, "setbgcdef()");
    tn += (setbgcdef()
            ? (tn
                ? (tn++ + 3)
                : 3)
            : 0);

    printf("%d\n", tn);
    return tn;
}
#endif  /* LINUXTERM_H */
