#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int x[100][100], int& m, int& n) {
	ifstream f("numere.txt");
	f >> m;
	f >> n;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {

			f >> x[i][j];
		}
	}
}
void afisare(int x[100][100], int& m, int& n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
void generareMatriceSol1(int x[100][100], int& m, int& n, int k) {
	for (int j = 0; j < m; j++) {
		x[0][j] = k;
	}
	for (int i = 0; i < m; i++) {
		x[i][0] = k;
	}
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < m; j++) {
			x[i][j] = x[i - 1][j] + x[i][j - 1];
		}
	}
}
int sumaElementeMaximeAleFiecareiLinie(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		int max = -1;
		for (int j = 0; j < n; j++) {
			if (x[i][j] > max) {
				max = x[i][j];
			}
		}
		s += max;
	}
	return s;
}
int sumaElementeMinimeAleFiecareiLinie(int x[100][100], int m, int n) {
	int s = 0;
	for (int i = 0; i < m; i++) {
		int min = 999;
		for (int j = 0; j < n; j++) {
			if (x[i][j] < min) {
				min = x[i][j];
				
			}
			
		}
		cout << min << endl;
		s += min;
	}
	return s;
}
void stergeVector(int v[], int& dim, int p) {

	for (int i = p; i < dim; i++) {
		v[i] = v[i + 1];
	}
	dim--;
}
void inserarePozitieVector(int v[], int& dim, int p, int nou) {
	for (int i = dim; i >= p; i--) {
		v[i + 1] = v[i];
	}
	dim++;
	v[p] = nou;

}
void generareMatriceSol4(int x[100][100], int& m, int& n, int v[], int d) {
	for (int i = 0; i < m; i++) {
		int dt = 0;
		for (int j = 0; j < n; j++) {
			x[i][j] = v[dt];
			dt++;
		}
		int aux = v[0];
		stergeVector(v, d, 0);
		inserarePozitieVector(v, d, m - 1, aux);
	}
}
bool esteMultiplu(int n, int k) {
	if (n % k == 0) {
		return true;
	}
	else {
		return false;
	}
}
int nrElementeAflatePeConturMultipluK(int x[100][100], int m, int n,int t) {
	int nr = 0;
	int i1 = 0;
	int i2 = m - 1;
	int j1 = 0;
	int j2 = n - 1;
	for (int k = j1; k <= j2; k++) {
		if (esteMultiplu(x[i1][k],t)) {
			nr++;
		}
	}
	for (int k = i1 + 1; k <= i2; k++) {
		if (esteMultiplu(x[k][j2], t)) {
			nr++;
		}

	}
	for (int k = j2 - 1; k >= j1; k--) {
		if (esteMultiplu(x[i2][k], t)) {
			nr++;
		}
	}
	for (int k = i2; k > i1; k--) {
		if (esteMultiplu(x[k][j1], t)) {
			nr++;
		}
	}
	return nr;
}
int numarColoaneComplementare(int x[100][100], int m, int n) {
	int nr = 0;
	for (int j = 0; j < n; j++) {
		bool aff = false;
		for (int i = 0; i < m-1; i++) {
			if (x[i][j] != x[i + 1][j]) {
				aff = true;
			}
		}
		if (aff == true) {
			nr++;
		}
	}
	return nr;
}
void generareMatriceSol8(int x[100][100], int& m, int& n) {
	int l = 0;
	int nr = 1;
	while (nr <= m * m) {
		for (int i = 0; i < m; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j++) {
					x[i][j] = nr;
					nr++;
				}
			}
			if (i % 2 != 0) {
				for (int j = m-1; j >= 0; j--) {
					x[i][j] = nr;
					nr++;
				}
			}
		}
	}
}
void generareMatriceSol9(int x[100][100], int& m, int& n) {
	int nr = 1;
	while (nr <= m * m) {
		for (int i1 = 0, j1 = 0, i2 = m - 1, j2 = n - 1; i1 <= i2 && j1 <= j2; i1++, j1++, i2--, j2--) {
			for (int k = j1; k < j2; k++) {
				x[i1][k] = nr;
				cout << nr << endl;
				nr++;
			}
			for (int k = i1; k <= i2; k++) {
				x[k][j2] = nr;
				cout << nr << endl;
				nr++;
			}
			for (int k = j2 - 1; k >= j1; k--) {
				x[i2][k] = nr;
				cout << nr << endl;
				nr++;
			}
			for (int k = i2; k > i1; k--) {
				x[k][j1] = nr;
				cout << nr << endl;
				nr++;
			}
		}
	}
}