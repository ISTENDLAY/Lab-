#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# в саду сорвали цветы
garden = ('ромашка', 'роза', 'одуванчик', 'ромашка', 'гладиолус', 'подсолнух', 'роза', )

# на лугу сорвали цветы
meadow = ('клевер', 'одуванчик', 'ромашка', 'клевер', 'мак', 'одуванчик', 'ромашка', )

# создайте множество цветов, произрастающих в саду и на лугу
garden_set = set(x for x in garden)
meadow_set = set(x for x in meadow)
# TODO здесь ваш код

# выведите на консоль все виды цветов
# TODO здесь ваш код
for x in garden_set.union(meadow_set):
    print(x, end=' ')
print()
# выведите на консоль те, которые растут и там и там
# TODO здесь ваш код
for x in garden_set.intersection(meadow_set):
    print(x, end=' ')
print()
# выведите на консоль те, которые растут в саду, но не растут на лугу
# TODO здесь ваш код
for x in garden_set.difference(meadow_set):
    print(x, end=' ')
# выведите на консоль те, которые растут на лугу, но не растут в саду
# TODO здесь ваш код
for x in meadow_set.difference(garden_set):
    print(x, end=' ')