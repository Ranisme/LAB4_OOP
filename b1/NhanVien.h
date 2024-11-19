#pragma once
#include <bits/stdc++.h>

using namespace std;

class NhanVien {
protected:
    string MS;
    string Ten;
    long long Luong;
public:
    NhanVien(const string& MS, const string& Ten, long long Luong);
    NhanVien() {};
    virtual void Nhap();
    virtual void Xuat();
    virtual long long TienThuong();
};

