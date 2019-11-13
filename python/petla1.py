#!/usr/bin/env python
# -*- coding: utf-8 -*-

def suma_parzystych():
    wynik = 0
    for i in range(0,101,2):
        #print(i)
        wynik = wynik + i
        
    print (wynik)
    
    
def suma_nieparzystych():
    wynik = 0
    for i in range(0,100,2):
        #print(i)
        wynik = wynik + i
        
    print (wynik)
    
def sumuj_wprowadzone():
    wynik = 0
    ile = int(input('Ile liczb ma zostać wprowadzone?: '))
    for i in range(ile):
        liczba = int(input('Podaj liczbę : '))
        wynik = wynik + liczba
        
    print (wynik)


def main(args):
    # [0, 1, 2, 3, 4]
    sumuj_wprowadzone()
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
