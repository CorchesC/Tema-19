#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//Scrie un program C/C++ care citeşte de la tastatură un număr natural N (2<N<20) si o valoare întreagă x, programul construiește în memorie un tablou bidimensional cu N linişi N coloane în care : toate elementele din prima linie și prima coloană au valoarea x; oricare alt element este obținut prin însumarea celor două elemente vecine cu el, aflate pe linia anterioară şi pe aceeaşi coloană cu el, respectiv pe aceeași linie cu el și pe coloana anterioară, ca în exemplu.
	//Programul afişează pe ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spațiu.
	int x[100][100], m = 0, n = 0;
	cout << "Introduceti m: " << endl;
	cin >> m;
	n = m;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	generareMatriceSol1(x, m, n,k);
	afisare(x, m, n);
}
void sol2() {
	// Scrie un program C/C++ care citeşte de la tastatură două valori naturale nenule M şi N (M10, N≤10) şi apoi M* N numere naturale nenule cu cel mult 4 cifre fiecare, reprezentând elementele unei matrice cu M linii şi N coloane.
	//Programul determină apoi valorile maxime de pe fiecare linie a matricei şi afişează pe ecran suma valorilor maxime determinate.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaElementeMaximeAleFiecareiLinie(x, m, n);
	cout << "Suma valorilor maxime determinate este: " << s << endl;
}
void sol3() {
	//Scrie un program C/C++ care citeşte de la tastatură două valori naturale nenule M şi N (M < 10, N≤10) şi apoi M* N numere naturale nenule cu cel mult 4 cifre fiecare, reprezentând elementele unei matrice cu M linii şi N coloane.
	//Programul determină apoi valorile minime de pe fiecare coloană a matricei şi afişează pe ecran suma valorilor minime determinate.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int s = sumaElementeMinimeAleFiecareiLinie(x, m, n);
	cout << "Suma valorilor minime determinate este: " << s << endl;
}
void sol4() {
	//Scrie un program C / C++ care citește de la tastatură un număr natural, N(N < 10), apoi N numere naturale din intervalul[0, 10], reprezentând valorile elementelor aflate pe prima linie a unui tablou bidimensional cu N linii și N coloane.
	//Programul construiește în memorie tabloul, inițializând celelalte elemente, astfel încât fiecare linie să se obțină prin permutarea circulară a elementelor liniei anterioare spre stânga, cu o poziție, ca în exemplu.Programul afişează pe ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele de pe aceeași linie fiind separate prin câte un spațiu.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti m: " << endl;
	cin >> m; 
	n = m;
	int ctr = 0; 
	int v[100], d =0;
	while (ctr != m) {
		int nr;
		cin >> nr;
		v[d] = nr;
		d++;
		ctr++;
	}
	generareMatriceSol4(x, m, n, v, d);
	afisare(x, m, n);
}
void sol5() {
	//Scrie un program C/C++ care citeşte de la tastatură numere naturale din intervalul [2 100], în această ordine : N, apoi elementele unui tablou bidimensional cu N linii şi N coloane, iar la final un număr x.Programul afişează pe ecran numărul valorilor aflate pe conturul tabloului(format din prima linie, ultima linie, prima coloană și ultima coloană) care sunt multipli ai numărului x.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	int nr = nrElementeAflatePeConturMultipluK(x, m, n, k); 
	cout << "Numarul valorilor aflate pe conturul tabloului care sunt multipli ai numarului x este: " << nr << endl;
}
void sol6() {
	//Scrie un program C/C++ care citeşte de la tastatură două numere naturale M şi N (2<M<50,2 < N < 50) şi elementele unui tablou bidimensional cu M linii şi N coloane, numere naturale cu cel mult patru cifre fiecare.
	//Programul determină liniile care au toate elementele egale cu aceeași valoare şi, pentru fiecare astfel de linie afişează pe ecran pe linii diferite numărul liniei separat printr-un spațiu de valoarea respectivă, iar dacă nu există astfel de valori,programul afişează pe ecran mesajul Nu există.
}
void sol7() {
	// Intr-un tablou bidimensional format numai din valorile 0 sau 1, spunem că două coloane sunt complementare, dacă oricare două elemente aflate pe aceeași linie sunt diferite.
	//Scrie un program C / C++ care citeşte de la tastatură două numere naturale M şi N(2 < M < 50,2≤N≤50) si elementele unui tablou bidimensional cu M linii şi N coloane, numere naturale din mulțimea (0,1), programul afişează pe ecran câte coloane complementare cu prima coloană sunt în matrice.
	int x[100][100], m = 0, n = 0;
	citire(x, m, n);
	int nr = numarColoaneComplementare(x, m, n);
	cout << "Numarul de coloane complementare este: " << nr << endl;
}
void sol8() {
	//Scrie un program C/C++ care citeşte de la tastatură un număr natural N (2<N≤15) şi naturale din intervalul[1, N * N] sunt așezate șerpuit ca în exemplu.
	//Programul afişează pe construieşte în memorie un tablou bidimensional cu N linii şi N coloane în care toate valorile ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spațiu.
	int x[100][100], m = 0, n = 0;
	cout << "Introduceti m: " << endl;
	cin >> m;
	n = m;
	generareMatriceSol8(x, m, n);
	afisare(x, m, n);
}
void sol9() {
	// Scrie un program C/C++ care citeşte de la tastatură un număr natural N (2<N<15) şi construiește în memorie un tablou bidimensional cu N linii și N coloane în care toate valorile naturale din intervalul[1, N * N] sunt așezate în spirală ca în exemplu.
	//Programul afișează pe ecran tabloul obținut, fiecare linie a tabloului pe câte o linie a ecranului, elementele fiecăre linii fiind separate prin câte un spațiu.
	int x[100][100], m = 0, n = 0;
	cout << "Introduceti m: " << endl;
	cin >> m;
	n = m;
	generareMatriceSol9(x, m, n);
	afisare(x, m, n);
}