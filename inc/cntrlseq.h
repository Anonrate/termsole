/**
 *  @file     cntrlseq.h
 *  @brief    cntrlseq.h
 *  @version  v.1
 *  @date     04/19/2017 17:04:51
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

#ifndef CNTRLSEQ_H
#define CNTRLSEQ_H

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
#endif  /* CNTRLSEQ_H */
