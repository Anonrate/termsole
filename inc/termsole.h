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

#include  "../../lgr/inc/lgr.h"
#include  "../../lgr/inc/lgrmsgs.h"

#include  "linux/linuxterm.h"

static inline
printfmtf(enum fmtset fmt, const char *format, ...)
{
    INFUNC_MSGL(DEBUG);
    CALLFN_MSGLS(TRACE, "setfmt()");

}
#endif  /* TERMSOLE_H */
