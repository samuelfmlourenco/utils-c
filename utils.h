/* C utility functions - Version 1.1.0
   Copyright (c) 2022-2024 Samuel Lourenço

   This library is free software: you can redistribute it and/or modify it
   under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or (at your
   option) any later version.

   This library is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
   License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this library.  If not, see <https://www.gnu.org/licenses/>.


   Please feel free to contact me via e-mail: samuel.fmlourenco@gmail.com */


#ifndef UTILS_H_
#define UTILS_H_

// Includes
#include <stdbool.h>
#include <stdint.h>

// Function prototypes
bool is_integer(char *value);
bool is_number(char *value);
void reverse_byte(uint8_t *value);
uint8_t reversed_byte(uint8_t value);

#endif  // UTILS_H_
