#include "KySu.h"
#include <bits/stdc++.h>

using namespace std;

KySu :: KySu(const string& MS, const string& Ten, long long Luong, int LamThem)
    : NhanVien(MS, Ten, Luong), LamThem(LamThem) {}

void KySu :: Nhap() {
    cout << "Nhap thong tin cua ky su \n";
    NhanVien :: Nhap();
    cout << "Nhap so gio lam them: ";
    cin >> LamThem;
}

void KySu :: Xuat() {
    NhanVien :: Xuat();
    cout << "So gio lam them: " << LamThem << "\n";
    cout << "Tien thuong: " << TienThuong() << "\n";
}

long long KySu::TienThuong() {
    return LamThem * 100000;
}
