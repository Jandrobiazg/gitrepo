#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#zadanie2.py
#
#Zsumuj liczby naturalne w przedziale podanym przez urzytkownika

def sumuj_parzyste():
    suma 0
    for liczba in range(a, b + 1): #[10,11,12,13,14,15, ...]
        if liczba % 2 == 0:
            suma = suma + liczba
    print(suma)
def sumuj_nieparzyste():
    suma 0
    for liczba in range(a, b + 1): #[10,11,12,13,14,15, ...]
        if liczba % 2 == 0:
            suma = suma + liczba
    print(suma)
def main(args):
    a = b = -1
    while a < 0:
        a = int(input('Podaj 1 liczbę: '))
    while b <= a:
        b = int(input('Podaj 2 liczbę: '))
    # wywoływanie funkcji
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
