#pragma once
#include "NhanVien.h"

class QuanLy : public NhanVien {
private:
    double TyLe;
public:
    QuanLy(const string& MS, const string& Ten, long long Luong, double TyLe);
    QuanLy() {};
    void Nhap() override;
    void Xuat() override;
    long long TienThuong() override;
};

