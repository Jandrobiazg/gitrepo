/*
 * domowa1.cxx
 */

#include <iostream> 
using namespace std; 

void wypiszTablice(int **a, int k, int w) {
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) { 
			cout << "[ " << a[i][j] << " ]" << " ";
		}
		cout << endl;
	} 
	cout << endl;
}

void sumujWiersze(int **a, int k, int w) 
{
	int sumyWierszy[w] = {0};
	int topIndeksW = 0;

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) { 
			sumyWierszy[i] += a[i][j];
		}
		if (sumyWierszy[i] > sumyWierszy[topIndeksW]) {
			topIndeksW = i; 
		}
	} 

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) { 
			cout << "[ " << a[i][j] << " ]" << " ";
		}
		cout << "[ =" << sumyWierszy[i] << " ] " << endl;
	} 
	cout << "Indeks wiersza o najwyzszej sumie: " << topIndeksW << endl << endl;
} 

void sumujKolumny(int **a, int k, int w) 
{
	int sumyKolumn[k] = {0};
	int topIndeksK = 0;

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) { 
			sumyKolumn[j] += a[i][j];
			if (sumyKolumn[j] > sumyKolumn[topIndeksK]) {
				topIndeksK = j;
			}
		}
	} 

	for (int i = 0; i < w; i++) {
		for (int j = 0; j < k; j++) { 
			cout << "[ " << a[i][j] << " ]" << " ";
		}
		cout << endl;
	}

	for (int j = 0; j < k; j++) {
		cout << "[ =" << sumyKolumn[j] <<  " ] ";
	}
	cout << endl << "Indeks kolumny z najwieksza suma: " << topIndeksK << endl;
} 

int main() 
{ 
	int lWierszy = 0;
	int lKolumn = 0;

	cout << "Ustalmy rozmiar tablicy!" << endl;
	cout << "Podaj liczbe kolumn: ";
	cin >> lKolumn;

	cout << "Podaj liczbe wierszy: ";
	cin >> lWierszy;

	int **tablica = new int*[lWierszy];
	for (int i = 0; i < lWierszy; i++) {
		tablica[i] = new int[lKolumn];
	}

	for (int i = 0; i < lWierszy; i++) {
		for (int j = 0; j < lKolumn; j++) {
			cout << "Podaj liczbe [" << i << "][" << j << "]: "; 
			cin >> tablica[i][j];
		}
	}

	cout << endl;

	wypiszTablice(tablica, lKolumn, lWierszy);
	sumujWiersze(tablica, lKolumn, lWierszy);
	sumujKolumny(tablica, lKolumn, lWierszy);

	return 0; 
} 
