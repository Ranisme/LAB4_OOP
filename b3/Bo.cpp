#include "Bo.h"
#include <bits/stdc++.h>

using namespace std;

Bo :: Bo(int soluong) : DongVat(soluong) {}

void Bo :: Keu() {
    for (int i = 1; i <= SoLuong; i++)
        cout << "BOOOOOOOOOO\n";
}

void Bo :: SinhCon() {
    int cnt = SoLuong;
    for (int i = 1; i <= cnt; i++)
        SoLuong += rand() % 21;
}

void Bo :: ChoSua() {
    for (int i = 1; i <= SoLuong; i++)
        Sua += rand() % 21;
}



