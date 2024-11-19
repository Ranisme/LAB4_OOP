#include <bits/stdc++.h>
#include "Deluxe.h"
#include "Premium.h"
#include "Business.h"

using namespace std;

int main() {
    Deluxe a(3, 100000, 2000000);
    Deluxe b(5, 200000, 4000000);
    Premium c(2, 5000000);
    Premium d(7, 10000000);
    Business e(10);

    int SumD = 0, SumP = 0, SumB = 0;
    SumD = a.Tien() + b.Tien();
    SumP = c.Tien() + d.Tien();
    SumB = e.Tien();
    int big = max({SumD, SumP, SumB});

    if (SumD == big)
        cout << "Deluxe la loai phong co doanh thu lon nhat \n";
    if (SumP == big)
        cout << "Premium la loai phong co doanh thu lon nhat \n";
    if (SumB == big)
        cout << "Business la loai phong co doanh thu lon nhat \n";
    return 0;
}
