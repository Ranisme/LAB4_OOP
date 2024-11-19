#include "KySu.h"
#include "QuanLy.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    QuanLy ql;
    KySu ks;
    ql.Nhap();
    ks.Nhap();

    ql.TienThuong();
    ks.TienThuong();

    ql.Xuat();
    cout << '\n';
    ks.Xuat();
    return 0;
}
