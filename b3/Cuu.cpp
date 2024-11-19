#include "Cuu.h"
#include <bits/stdc++.h>

using namespace std;

Cuu :: Cuu(int soluong) : DongVat(soluong) {}

void Cuu :: Keu() {
    for (int i = 1; i <= SoLuong; i++)
        cout << "CUUUUUUUUUUUU\n";
}

void Cuu :: SinhCon() {
    int cnt = SoLuong;
    for (int i = 1; i <= cnt; i++)
        SoLuong += rand() % 6;
}

void Cuu :: ChoSua() {
    for (int i = 1; i <= SoLuong; i++)
        Sua += rand() % 6;
}




