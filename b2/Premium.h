#pragma once
#include "Room.h"
#include <bits/stdc++.h>

using namespace std;

class Premium : public Room {
private:
    int Dichvu1;
public:
    Premium(int dem, int dichvu1);
    int Tien() override;
};

