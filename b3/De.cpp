#include "De.h"
#include <bits/stdc++.h>

using namespace std;

De :: De(int soluong) : DongVat(soluong) {}

void De :: Keu() {
    for (int i = 1; i <= SoLuong; i++)
        cout << "DEEEEEEEEEEEE\n";
}

void De :: SinhCon() {
    int cnt = SoLuong;
    for (int i = 1; i <= cnt; i++)
        SoLuong += rand() % 6;
}

void De :: ChoSua() {
    for (int i = 1; i <= SoLuong; i++)
        Sua += rand() % 6;
}





