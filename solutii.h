#include "probleme.h"

#pragma once
#include <iostream>
#include <string.h>
#pragma warning (disable : 4996)
using namespace std;

//VARIANTA 2

void sol1() {

    char s[200] = "bacalaureat";

    dublareVocala(s);

    cout << s << endl;

}

void sol2() {

    int v[] = { -3,-10,0,7,-5,7,51,-800,6,3798 };

    int dim = 10;

    bubbleSort(v, dim);

    numarNegative(v, dim);

}

//VARIANTA 4

void sol3() {

    char c[200] = "cdsDAJJjkerA";

    eliminareLiterelorMici(c);

    cout << c << endl;

}

void sol4() {

    int a[100][100];
    int n = 4;



    matrice1(a, n);

    afisareMatrice(a, n, n);

}

void sol5() {

    int v[] = { 421,1241,347,329,902,549,2176,2412,4385 };

    int dim = 9;

    bubbleSortDesc(v, dim);

    numereMax2Cifre(v, dim);

}

void sol6() {

    int a = 125854;

    int b = 5;

    cout << numarAparitii(a, b);
}

//VARIANTA 5

void sol7() {

    char s[200] = "sebastian";

    interschimbare(s);

    cout << s << endl;

}

void sol8() {

    int a[100][100];
    int n = 4;
    int m = 5;

    matrice2(a, n, m);

    afisareMatrice(a, n, m);

}

void sol9() {

    int n = 10305;

    prefixe(n);

}

void sol10() {

    int n = 45;

    cout << celMaiMicDivPrim(n);

    cout << endl;

    int v[] = { 1125,2,314,101,37,225,12 };

    int dim = 7;


    numerePrimeSir(v, dim);
}

//VARIANTA 6

void sol11() {

    char s[200] = "mare   frig rosu";

    transformarePrimaLitera(s);

    cout << s << endl;
}

void sol12() {

    int v[200] = { 1,7,3,4 };

    int dim = 4;

    sumaAfisare(v, dim);
}

void sol13() {

    int v[200] = { 1,1,1,5,5,5,5,9,9,11,20,20,20 };

    int dim = 13;

    sirAparitiiNumere(v, dim);

}

//VARIANTA 7

void sol14() {

    char s[200] = "mare  frig saci";

    eliminareUltimaConsoana(s);

    cout << s << endl;
}


void sol15() {

    int v[9] = { 1,2,3,4,5,6,7,8,9 };

    int dim = 9;

    inteschimbareCifre(v, dim);

    for (int i = 0; i < dim; i++) {
        cout << v[i] << " ";
    }

}

void sol16() {

    int n = 63;

    subProgram(n);

}

//VARIANTA 10


void sol17() {

    char s[200] = "abbacdde";

    sirCaractereRez(s);

}

void sol18() {

    int a[100][100], n = 2, p = 3;

    matricePatratePerf(a, n, p);

    afisareMatrice(a, n, p);

}

//VARIANTA 25

void sol19() {

    char s[200] = "cojoc";

    palindromCuvant(s);

}

void sol20() {

    int a[100][100] = { {2,1,1,0},{1,1,1,1},{2,2,2,1},{1,2,1,1} };

    int n = 4;

    int m = 4;

    matriceProdus(a, n, m);

}