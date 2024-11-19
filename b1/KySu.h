#pragma once
#include "NhanVien.h"

class KySu : public NhanVien {
private:
    int LamThem;
public:
    KySu(const string& MS, const string& Ten, long long Luong, int LamThem);
    KySu() {};
    void Nhap() override;
    void Xuat() override;
    long long TienThuong() override;
};



