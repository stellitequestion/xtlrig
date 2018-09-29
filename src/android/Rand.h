/* XTLRig
 * Copyright 2018       wjchen       <https://github.com/wjchen>
 * Copyright 2018       XTLRig       <https://github.com/stellitecoin>, <support@stellite.cash>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __RAND_AND_H
  #define __RAND_AND_H

  #ifdef __ANDROID__
  int myrand(void);
  void mysrand(unsigned int seed);
  #undef rand
  #undef srand
  #define rand myrand
  #define srand mysrand
  #endif

#endif
