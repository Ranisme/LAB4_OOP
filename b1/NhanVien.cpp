#include "NhanVien.h"
#include <bits/stdc++.h>

using namespace std;

NhanVien :: NhanVien(const string& MS, const string& Ten, long long Luong)
    : MS(MS), Ten(Ten), Luong(Luong) {}

void NhanVien :: Nhap() {
    cout << "Nhap ma so: ";
    cin >> MS;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, Ten);
    cout << "Nhap luong co ban: ";
    cin >> Luong;
}

void NhanVien :: Xuat() {
    cout << "Ma so: " << MS << "\n";
    cout << "Ten: " << Ten << "\n";
    cout << "Luong co ban: " << Luong << "\n";
}

long long NhanVien :: TienThuong() {
    return 0;
}
