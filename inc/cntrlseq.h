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
    S_BOLD        = "\e[1m",
    S_DIM         = "\e[2m",
    S_UNDERLINED  = "\e[4m",
    S_BLINK       = "\e[5m",
    S_REVERSE     = "\e[7m",
    S_HIDDEN      = "\e[8m"
};

enum
fmtreset {
    RS_ALL        = "\e[0m",
    S_BOLD        = "\e[21m",
    S_DIM         = "\e[22m",
    S_UNDERLINED  = "\e[24m",
    S_BLINK       = "\e[25m",
    S_REVERSE     = "\e[27m",
    S_HIDDEN      = "\e[28m"
};

enum
fgcol {
    FG_DEF            = "\e[39m",
    FG_BLACK          = "\e[30m",
    FG_RED            = "\e[31m",
    FG_GREEN          = "\e[32m",
    FG_YELLOW         = "\e[33m",
    FG_BLUE           = "\e[34m",
    FG_MAGENTA        = "\e[35m",
    FG_CYAN           = "\e[36m",
    FG_LIGHT_GRAY     = "\e[37m",
    FG_DARK_GRAY      = "\e[90m",
    FG_LIGHT_RED      = "\e[91m",
    FG_LIGHT_GREEN    = "\e[92m",
    FG_LIGHT_YELLOW   = "\e[93m",
    FG_LIGHT_BLUE     = "\e[94m",
    FG_LIGHT_MAGENTA  = "\e[95m",
    FG_LIGHT_CYAN     = "\e[96m",
    FG_WHITE          = "\e[97m"
};

enum
bgcol {
    BG_DEF            = "\e[49m",
    BG_BLACK          = "\e[40m",
    BG_RED            = "\e[41m",
    BG_GREEN          = "\e[42m",
    BG_YELLOW         = "\e[43m",
    BG_BLUE           = "\e[44m",
    BG_MAGENTA        = "\e[45m",
    BG_CYAN           = "\e[46m",
    BG_LIGHT_GRAY     = "\e[47m",
    BG_DARK_GRAY      = "\e[100m",
    BG_LIGHT_RED      = "\e[101m",
    BG_LIGHT_GREEN    = "\e[102m",
    BG_LIGHT_YELLOW   = "\e[103m",
    BG_LIGHT_BLUE     = "\e[104m",
    BG_LIGHT_MAGENTA  = "\e[105m",
    BG_LIGHT_CYAN     = "\e[106m",
    BG_WHITE          = "\e[107m"
};
#endif  /* CNTRLSEQ_H */
