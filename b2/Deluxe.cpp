#include <bits/stdc++.h>
#include "Deluxe.h"

using namespace std;

Deluxe :: Deluxe(int dem, int dichvu1, int dichvu2) :
    Room(dem), Dichvu1(dichvu1), Dichvu2(dichvu2) {}

int Deluxe :: Tien() {
    return Dem * 750000 + Dichvu1 + Dichvu2;
}

