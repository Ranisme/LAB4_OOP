#pragma once
#include <bits/stdc++.h>

using namespace std;

class DongVat {
protected:
    int SoLuong;
    int Sua;
public:
    DongVat(){};
    DongVat(int soluong);
    int GetSoLuong();
    int GetSua();
    virtual void Keu();
    virtual void SinhCon();
    virtual void ChoSua();
};
