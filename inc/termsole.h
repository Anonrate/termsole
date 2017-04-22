/**
 *  @file     termsole.h
 *  @brief    termsole.h
 *  @version  v.1
 *  @date     04/19/2017 15:07:52
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

#ifndef TERMSOLE_H
#define TERMSOLE_H

#include  <stdarg.h>

#include  "../../lgr/inc/lgr.h"
#include  "../../lgr/inc/lgrmsgs.h"

#include  "linux/linuxterm.h"

static inline int
fprintfmtf(FILE *stream, enum fmtset fmt, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
printfmtf(enum fmtset fmt, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");
    setfmt(fmt);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
fprintfgcf(FILE *stream, enum fgcol fgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
printfgcf(enum fgcol fgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgc()");
    setfgc(fgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
fprintbgcf(FILE *stream, enum bgcol bgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
printbgcf(enum bgcol bgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setbgc()");
    setbgc(bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
fprintfgbgcf(       FILE  *stream,
             enum   fgcol fgc,
             enum   bgcol bgc,
             const   char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgbgc()");
    setfgbgc(fgc, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

static inline int
printfgbgcf(enum fgcol fgc, enum bgcol bgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfgbgc()");
    setfgbgc(fgc, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
fprintfmtfgbgcf(        FILE    *stream,
                enum    fmtset  fmt,
                enum    fgcol   fgc,
                enum    bgcol   bgc,
                const   char    *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtfgbgc()");
    setfmtfgbgc(fmt, fgc, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
printfmtfgbgcf(enum  fmtset  fmt,
            enum  fgcol   fgc,
            enum  bgcol   bgc,
            const char    *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtfgbgc()");
    setfmtfgbgc(fmt, fgc, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
fprintfmtfgcf(      FILE    *stream,
              enum  fmtset  fmt,
              enum  fgcol   fgc,
              const char    *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtfgc()");
    setfmtfgc(fmt, fgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
printfmtfgcf(enum fmtset fmt, enum fgcol fgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtfgc()");
    setfmtfgc(fmt, fgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
fprintfmtbgcf(      FILE    *stream,
              enum  fmtset  fmt,
              enum  bgcol   bgc,
              const char    *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtbgc()");
    setfmtbgc(fmt, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stream, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}

/**
 *  \note  May change type 'enum fmtset' to 'enum allfmts'
 */
static inline int
printfmtbgcf(enum fmtset fmt, enum bgcol bgc, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmtbgc()");
    setfmtbgc(fmt, bgc);

    va_list vargs;
    va_start(vargs, format);
    CALLFN_MSGLS(TRACE, "vfprintf()");
    int tn = vfprintf(stdout, format, vargs);
    va_end(vargs);

    R_MSGLD(DEBUG, tn);
    return tn;
}
#endif  /* TERMSOLE_H */
