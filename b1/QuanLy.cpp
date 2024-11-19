#include "QuanLy.h"
#include <bits/stdc++.h>

using namespace std;

QuanLy :: QuanLy(const string& MS, const string& Ten, long long Luong, double TyLe)
    : NhanVien(MS, Ten, Luong), TyLe(TyLe) {}

void QuanLy :: Nhap() {
    cout << "Nhap thong tin cua quan ly \n";
    NhanVien :: Nhap();
    cout << "Nhap ty le thuong: ";
    cin >> TyLe;
    cout << "\n";
}

void QuanLy :: Xuat() {
    NhanVien :: Xuat();
    cout << "Ty le thuong: " << TyLe << "\n";
    cout << "Tien thuong: " << TienThuong() << "\n";
}

long long QuanLy::TienThuong() {
    return Luong * TyLe;
}
