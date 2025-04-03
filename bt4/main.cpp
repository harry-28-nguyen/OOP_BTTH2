#include <iostream>
#include "time.h"

using namespace std;

int main()
{
    int q; cin >> q;
    while (q>0)
    {
    time gio1;
    gio1.Nhap();
    cout << "Thoi gian hien tai la ";
    gio1.Xuat();
    cout << "\nThoi gian sau khi cong them 1 giay la ";
    gio1.TinhCongThemMotGiay();
    cout << endl;
    q--;
    }
    return 0;
}
