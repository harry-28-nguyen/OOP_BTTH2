#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    date day1;
    day1.Nhap();
    cout << "Ngay hom nay: ";
    day1.Xuat();
    cout << "\nNgay mai: ";
    day1.NgayThangNamTiepTheo();
    day1.Xuat();
    return 0;
}
