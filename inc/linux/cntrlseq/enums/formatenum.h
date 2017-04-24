/**
 *  @file     formatenum.h
 *  @brief    formatenum.h
 *  @version  v.1
 *  @date     04/23/2017 21:04:15
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

#ifndef FORMATENUM_H
#define FORMATENUM_H

enum
allfmts {
    xS_BOLD         = 1u,
    xS_DIM          = 2u,
    xS_UNDERLINED   = 4u,
    xS_BLINK        = 5u,
    xS_REVERSE      = 7u,
    xS_HIDDEN       = 8u,
    xRS_ALL         = 0u,
    xRS_BOLD        = 21u,
    xRS_DIM         = 22u,
    xRS_UNDERLINED  = 24u,
    xRS_BLINK       = 25u,
    xRS_REVERSE     = 27u,
    xRS_HIDDEN      = 28u
};

enum
fmtset {
    S_BOLD        = xS_BOLD,
    S_DIM         = xS_DIM,
    S_UNDERLINED  = xS_UNDERLINED,
    S_BLINK       = xS_BLINK,
    S_REVERSE     = xS_REVERSE,
    S_HIDDEN      = xS_HIDDEN
};

enum
fmtreset {
    RS_ALL        = xRS_ALL,
    RS_BOLD       = xRS_BOLD,
    RS_DIM        = xRS_DIM,
    RS_UNDERLINED = xRS_UNDERLINED,
    RS_BLINK      = xRS_BLINK,
    RS_REVERSE    = xRS_REVERSE,
    RS_HIDDEN     = xRS_HIDDEN
};
#endif  /* FORMATENUM_H */
