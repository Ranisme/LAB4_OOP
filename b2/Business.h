#pragma once
#include "Room.h"
#include <bits/stdc++.h>

using namespace std;

class Business : public Room {
public:
    Business(int dem);
    int Tien() override;
};


