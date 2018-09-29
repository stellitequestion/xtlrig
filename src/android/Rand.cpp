/* XTLRig
 * Copyright 2018       wjchen       <https://github.com/wjchen>
 * Copyright 2018       Stellite Team       <https://github.com/stellitecoin>, <support@stellite.cash>
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

#include "Rand.h"
#ifdef __ANDROID__
  static unsigned myNextRandom = 1;

  int myrand(void)
  {
      if (myNextRandom == 0) {
          myNextRandom = 123459876;
      }
      unsigned int hi = myNextRandom / 127773;
      unsigned int lo = myNextRandom % 127773;
      unsigned int x = (16807*lo - 2836*hi)&0xFFFFFFFF;
      myNextRandom = x;
      return x;
  }

  void mysrand(unsigned int seed)
  {
  	myNextRandom = seed;
  }

#endif
