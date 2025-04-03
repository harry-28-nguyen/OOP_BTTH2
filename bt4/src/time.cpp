#include "time.h"
#include <iostream>
using namespace std;

time::time(){}

void time::Nhap()
{
    do{
        cout << "Nhap gio (0-24): "; cin >> iGio;
        if (iGio < 0 || iGio > 24) cout << "Khong hop le! Vui long nhap lai trong khoang thoi gian quy dinh.\n";
    }while (iGio < 0 || iGio > 24);


    do{
        cout << "Nhap phut (0-59): "; cin >> iPhut;
        if (iPhut < 0 || iPhut >= 60) cout << "Khong hop le! Vui long nhap lai trong khoang thoi gian quy dinh.\n";
    }while (iPhut < 0 || iPhut >= 60);

    do{
        cout << "Nhap giay (0-59): "; cin >> iGiay;
        if (iGiay < 0 || iGiay >= 60) cout << "Khong hop le! Vui long nhap lai trong khoang thoi gian quy dinh.\n";
    }while (iGiay < 0 || iGiay >= 60);
}

void time::Xuat()
{
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

void time::TinhCongThemMotGiay()
{
    iGiay++;
    if(iGiay == 60)
    {
        if(iPhut == 59)
        {
            if (iGio == 23)
            {
                cout << "00:00:00";
                return;
            }
            else if (iGio == 24)
            {
                cout << "01:00:00";
                return;
            }
            else
            {
                iGio++;
                cout << iGio << ":00:00";
                return;
            }
        }
        else
        {
            iPhut++;
            cout << iGio << ":" << iPhut << ":00";
            return;
        }
    }
    cout << iGio << ":" << iPhut << ":" << iGiay;
}
