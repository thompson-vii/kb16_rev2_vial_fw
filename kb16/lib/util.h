/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// These functions were added to `quantum/util.h` in late 2022,
// have not been ported to Vial yet

#if !defined(IS_ARRAY)
/**
 * @brief Returns true if the value is an array, false if it's a pointer.
 *
 * This macro is ill-formed for scalars, which is OK for its intended use in
 * ARRAY_SIZE.
 */
#    define IS_ARRAY(value) (!__builtin_types_compatible_p(typeof((value)), typeof(&(value)[0])))
#endif

#if !defined(ARRAY_SIZE)
/**
 * @brief Computes the number of elements of the given array at compile time.
 *
 * This Macro can only be used for statically allocated arrays that have not
 * been decayed into a pointer. This is detected at compile time, though the
 * error message for scalar values is poor.
 */
#    define ARRAY_SIZE(array) (__builtin_choose_expr(IS_ARRAY((array)), sizeof((array)) / sizeof((array)[0]), (void)0))
#endif

#define WRITE_RAW(x) oled_write_raw_P(x, ARRAY_SIZE(x))