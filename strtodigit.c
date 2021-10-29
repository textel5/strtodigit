/*
    strtodigit translate string to int
    Copyright (C) 2021  Sergey Tokarev
....
    This file is part of strtodigit.
    strtodigit is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    listint is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with listint.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "strtodigit.h"

#ifdef DEBUG
#include <stdio.h>
#endif

int strtodigit(const char *str)
{
  int digit, sign, i;
  i = 0;
  if (str[i] == '-') {
    sign = -1;
    i++;
  } else {
    sign = 1;
  }
  digit = 0;
  while (str[i]) {
    if (str[i] < '0' || str[i] > '9')
      return 0;
    digit *= 10;
    digit += str[i] - '0';
#ifdef DEBUG
    printf("stdtodigit.c: %d\n", digit);
#endif
  i++;
  }
  digit *= sign;
#ifdef DEBUG
  printf("strtodigit.c: %d\n", digit);
#endif
  return digit;
}