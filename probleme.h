#pragma once
#include <iostream>
#include <string.h>
#pragma warning (disable : 4996)
using namespace std;

// VARIANTA 2

// S2

void dublareVocala(char* s) {

	int len = strlen(s);

	char c[200] = "";

	for (int i = 0; i < len; i++) {

		if (strchr("aeiou", s[i])) {

			strncat(c, &s[i], 1);

			s[i] = toupper(s[i]);

			strncat(c, &s[i], 1);

		}
		else {
			strncat(c, &s[i], 1);
		}

	}
	strcpy(s, c);
}

//S3 3

void bubbleSort(int v[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] > v[i + 1]) {

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;

			}

		}


	} while (sortat == false);

}

void numarNegative(int v[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (v[i] > 0) {

			cout << v[i] << " ";
		}

	}

}

// VARIANTA 4

void eliminareLiterelorMici(char* s) {

	char c[200] = {};

	int i = 0;

	while (i < strlen(s)) {

		if (!islower(s[i])) {

			strncat(c, &s[i], 1);

		}
		i++;
	}
	strcpy(s, c);
}

void afisareMatrice(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			cout << a[i][j] << " ";

		}
		cout << endl;
	}

}

void matrice1(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i + j == n - 1) {
				a[i][j] = 0;
			}
			else {

				a[i][j] = n - i;
			}

		}


	}

}

void bubbleSortDesc(int v[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (v[i] < v[i + 1]) {

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;

			}

		}

	} while (sortat == false);

}

void numereMax2Cifre(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (v[i] < 99) {

			cout << v[i] << " ";
			ct++;

		}

	}

	if (ct == 0) {
		cout << "NU EXISTA" << endl;
	}
}

int numarAparitii(int a, int b) {

	int ct = 0;

	while (a != 0) {

		int cifra = a % 10;
		if (cifra == b) {
			ct++;
		}
		a /= 10;
	}
	return ct;
}

// VARIANTA 5

void interschimbare(char* s) {

	int i = 0;

	int j = strlen(s) - 1;

	while (i < j) {

		char aux = s[i];
		s[i] = s[j];
		s[j] = aux;

		i++;
		j--;
	}

}

void matrice2(int a[100][100], int n, int m) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (i > j) {
				a[i][j] = i + 1;
			}
			else {
				a[i][j] = j + 1;
			}

		}
	}

}

void prefixe(int n) {

	while (n != 0) {

		cout << n << " ";
		n = n / 10;

	}

}

int prim(int n) {

	if (n < 2) {
		return false;
	}
	for (int i = 2; i * i <= n; i++) {

		if (n % i == 0) {

			return false;
		}

	}
	return true;
}

int celMaiMicDivPrim(int n) {

	int divMin = n;

	for (int i = 2; i < n; i++) {

		if (n % i == 0 && prim(i)) {

			if (i < divMin) {
				divMin = i;

			}

		}

	}
	return divMin;
}

void numerePrimeSir(int v[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (celMaiMicDivPrim(v[i]) == v[i]) {

			cout << v[i] << " ";

		}

	}

}

//VARIANTA 6

void transformarePrimaLitera(char* s) {

	char* cuvant = strtok(s, " ");

	char c[200] = "";

	while (cuvant) {

		int len = strlen(cuvant);

		if (len > 0) {

			cuvant[0] = toupper(cuvant[0]);
			strcat(c, cuvant);
			strcat(c, " ");

		}
		cuvant = strtok(NULL, " ");
	}
	strcpy(s, c);
}

void sumaAfisare(int v[], int& dim) {

	int suma = 0;

	for (int i = 0; i < dim; i++) {

		suma += v[i];

		cout << suma << endl;

	}
	dim--;
}

void algoritmFrecventa(int v[], int dim, int f[]) {

	for (int i = 0; i < dim; i++) {

		f[v[i]]++;

	}

}

void sirAparitiiNumere(int v[], int dim) {

	int f[1000]{};

	algoritmFrecventa(v, dim, f);

	for (int i = 0; i < dim; i++) {

		if (f[i] != 0) {
			cout << i << " " << f[i] << " ";
		}
	}

}

//VARIANTA 7

void stergereCaracter(char* s, int poz) {

	char c1[200] = "";

	int len = strlen(s);

	strncat(c1, s, poz);

	strcat(c1, s + poz + 1);

	strcpy(s, c1);
}

void eliminareUltimaConsoana(char* s) {

	int len = strlen(s);


	for (int i = len - 1; i >= 0; i--) {

		if (!strchr("aeiou", s[i])) {

			stergereCaracter(s, i);
			break;
		}
	}

}

void inteschimbareCifre(int v[], int dim) {

	int pozPara = -1;
	int pozImpara = -1;

	for (int i = 0; i < dim; i++) {

		if (v[i] % 2 == 0) {
			pozPara = i;
			break;
		}
	}

	for (int i = dim - 1; i >= 0; i--) {

		if (v[i] % 2 != 0) {
			pozImpara = i;
			break;
		}
	}

	if (pozPara != -1 && pozImpara != -1) {

		int temp = v[pozPara];
		v[pozPara] = v[pozImpara];
		v[pozImpara] = temp;

	}
}

int sub(int n) {

	if (n <= 5) {
		return n;
	}

	int fn = 1;
	while (2 * fn <= n) {
		fn *= 2;
	}

	return fn;
}

void subProgram(int n) {

	while (n > 0) {
		int term = sub(n);

		cout << term << " ";

		n -= term;
	}
}

//VARIANTA 10

void sirCaractereRez(char* s) {

	int i = 0;

	while (i < strlen(s) - 1) {
		if (s[i] == s[i + 1]) {
			strcpy(s + i, s + i + 1);
		}
		else {
			i = i + 1;
		}
	}
	cout << s;
}

void matricePatratePerf(int a[100][100], int n, int p) {

	int val = 0;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < p; j++) {

			a[i][j] = val * val;
			val += 2;
		}
	}
}

// VARIANTA 25

bool estePalindrom(char* cuvant) {

	int len = strlen(cuvant);

	for (int i = 0; i < len / 2; i++) {

		if (cuvant[i] != cuvant[len - i - 1]) {

			return false;

		}

	}
	return true;
}

void palindromCuvant(char* s) {

	if (estePalindrom(s)) {
		cout << "Corect" << endl;
	}
	else {
		cout << "Incorect" << endl;
	}

}

void matriceProdus(int a[100][100], int n, int m) {

	int maxProdus = 0;


	for (int j = 0; j < n; j++) {
		int produs = 1;
		for (int i = 0; i < m; i++) {
			produs *= a[i][j];
		}


		if (produs > maxProdus) {
			maxProdus = produs;
		}
	}
	for (int j = 0; j < n; j++) {
		int produs = 1;
		for (int i = 0; i < m; i++) {
			produs *= a[i][j];
		}
		if (produs == maxProdus) {
			cout << j + 1 << " ";
		}
	}

}

//VARIANTA 28

//void eliminareClone(char* s) {
//
//	int len = strlen(s);
//
//	char vocale[200] = "";
//
//	for (int i = 0; i < len; i++) {
//
//		if (strchr("aeiou", s[i]) {
//
//			strc
//
//		}
//
//	}
//
//}