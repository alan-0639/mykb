/*
Copyright 2021-2022 Alin M Elena <alinm.elena@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <stdint.h>
typedef uint32_t  u32;
typedef uint16_t u16;
typedef uint8_t  u8;

#define QF_RESET do { __set_FAULTMASK(1); NVIC_SystemReset(); } while (0)


#define LAYOUT_ortho2_5x15( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
	K10, K11, K12, K13, K14, K15, K16,      \
	K20, K21, K22, K23, K24, K25, K26, K27, \
	K30, K31, K32, K33, K34, K35, K36, K37, \
	K40, K41, K42, K43, K44, K45, K46, K47, \
	K50, K51, K52, K53,      K55, K56, K57  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16,   KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47 }, \
	{ K50,   K51,   K52,   K53,   KC_NO, K55,   K56,   K57 }  \
}
