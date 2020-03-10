/*
 * wyszukaj.cxx
 */

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



int main(int argc, char **argv)
{
	int tab[10];
    srand(time(NULL));
    for(int i = 0; i < 10; i++) {
        tab[i] = rand() % 11;
        cout << tab[i] << " ";
    }
    cout << endl;
    int n;
    cout << "Podaj szukaną liczbę: ";
    cin >> n;
    for (int i = 0; i < 10; i++){
		if(n == tab[i])
			cout << "liczba znajduje sie w tablicy, a jej indeks to " << i << endl;
		else
			if(n != tab[i])
				cout << "-1" << endl;
	}
	return 0;
}

