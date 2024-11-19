#include <bits/stdc++.h>
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

using namespace std;

int main() {
    srand(time(0));
    int CntBo, CntCuu, CntDe;
    cout << "Nhap so luong bo: "; cin >> CntBo;
    cout << "Nhap so luong cuu: "; cin >> CntCuu;
    cout << "Nhap so luong de: "; cin >> CntDe;

    Bo b(CntBo);
    Cuu c(CntCuu);
    De d(CntCuu);

    b.Keu();
    c.Keu();
    d.Keu();

    b.SinhCon();
    c.SinhCon();
    d.SinhCon();
    b.ChoSua();
    c.ChoSua();
    d.ChoSua();

    cout << "So luong bo " << b.GetSoLuong() << " cho " << b.GetSua() << " l sua\n";
    cout << "So luong de " << d.GetSoLuong() << " cho " << d.GetSua() << " l sua\n";
    cout << "So luong cuu " << c.GetSoLuong() << " cho " << c.GetSua() << " l sua\n";

    return 0;
}
