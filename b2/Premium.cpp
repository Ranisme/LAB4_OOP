#include <bits/stdc++.h>
#include "Premium.h"

using namespace std;

Premium :: Premium(int dem, int dichvu1) :
    Room(dem), Dichvu1(dichvu1) {}

int Premium :: Tien() {
    return Dem * 500000 + Dichvu1;
}


