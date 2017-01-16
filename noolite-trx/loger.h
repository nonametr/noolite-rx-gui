/*
 *  Copyright 2015 Igor K. aka nonametr
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LOGER
#define LOGER

#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>

static void traceError(const char * msg, ...)
{
    va_list args;
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    va_end(args);

    fflush(stdout);
}

static void traceNotice(const char * msg, ...)
{
    va_list args;
    va_start(args, msg);
    vfprintf(stdout, msg, args);
    va_end(args);

    fflush(stdout);
}

#endif // LOGER
