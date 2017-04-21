/**
 *  @file     termsole.c
 *  @brief    termsole.c
 *  @version  v.1
 *  @date     04/19/2017 15:08:26
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

#include  <stdio.h>
#include  <stdlib.h>

#include  "../inc/termsole.h"

#define TERMSOLE_DEV

#ifdef  TERMSOLE_DEV
int
main(void)
{
    setlogtofile(1);
    setfilename("termsole");
    setverblvl(TRACE);
    setfileprio(TRACE);
    logltffnlf(DEBUG, "%s\n", "Created log file!");
    dellog();

    swapfgbgc();
    printf("Bruh!\n");

    return EXIT_SUCCESS;
}


#endif  /* TERMOSLE_DEV */
