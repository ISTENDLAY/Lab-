#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# Есть словарь координат городов

sites = {
    'Moscow': (550, 370),
    'London': (510, 510),
    'Paris': (480, 480),
}

# Составим словарь словарей расстояний между ними
# расстояние на координатной сетке - ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

distances = {}

# TODO здесь заполнение словаря
l = list(sites.keys())
def d(x1,y1, x2, y2):
    return ((x1 - x2) ** 2 + (y1 - y2) ** 2) ** 0.5

for i in range(len(l)):
    for j in range(i+1, len(l)):
        distances.update({l[i]+l[j]: d(sites[l[i]][0], sites[l[i]][1],sites[l[j]][0],sites[l[j]][1])})


print(distances)




