#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# Есть значение радиуса круга
radius = 42


pi = 3.1415926
s = round(pi * radius ** 2, 4)
print(s)

# Далее, пусть есть координаты точки
point_1 = (23, 34)

if (23**2+34**2)**0.5 > radius:
    print(False)
else:
    print(True)
# Аналогично для другой точки
point_2 = (30, 30)

if (point_2[0]**2+point_2[1]**2)**0.5 > radius:
    print(False)
else:
    print(True)


