#!/usr/bin/env python3
# -*- coding: utf-8 -*-
goods = {
    'Лампа': '12345',
    'Стол': '23456',
    'Диван': '34567',
    'Стул': '45678',
}
store = {
    '12345': [
        {'quantity': 27, 'price': 42},
    ],
    '23456': [
        {'quantity': 22, 'price': 510},
        {'quantity': 32, 'price': 520},
    ],
    '34567': [
        {'quantity': 2, 'price': 1200},
        {'quantity': 1, 'price': 1150},
    ],
    '45678': [
        {'quantity': 50, 'price': 100},
        {'quantity': 12, 'price': 95},
        {'quantity': 43, 'price': 97},
    ],
}
l = list(goods.keys())
n0 = (store[goods[l[0]]][0]['quantity'] * store[goods[l[0]]][0]['price'], store[goods[l[0]]][0]['quantity'])
n1 = (store[goods[l[1]]][0]['quantity'] * store[goods[l[1]]][0]['price'], store[goods[l[1]]][0]['quantity'])
n2 = (store[goods[l[2]]][0]['quantity'] * store[goods[l[2]]][0]['price'], store[goods[l[2]]][0]['quantity'])
n3 = (store[goods[l[3]]][0]['quantity'] * store[goods[l[3]]][0]['price'], store[goods[l[3]]][0]['quantity'])
print(f'{l[0]} - {n0[1]} шт, стоимость {n0[0]} руб')
print(f'{l[1]} - {n1[1]} шт, стоимость {n1[0]} руб')
print(f'{l[2]} - {n2[1]} шт, стоимость {n2[0]} руб')
print(f'{l[3]} - {n3[1]} шт, стоимость {n3[0]} руб')