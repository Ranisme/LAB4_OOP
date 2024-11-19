#pragma once
#include "Room.h"
#include <bits/stdc++.h>

using namespace std;

class Deluxe : public Room{
private:
    int Dichvu1, Dichvu2;
public:
    Deluxe(int dem, int dichvu1, int dichvu2);
    int Tien() override;
};
