#include "soPhuc.h"
#include <iostream>
using namespace std;

soPhuc::soPhuc(){}

void soPhuc::Nhap()
{
    cout << "nhap so thuc: "; cin >> iThuc;
    cout << "nhap so ao: "; cin >> iAo;
}

void soPhuc::Xuat()
{
    if (iThuc == 0)
    {
        if (iAo != 0) cout << iAo << "i";
        else cout << 0;
    }
    else if (iAo == 0) cout << iThuc;
    else if (iAo < 0) cout << iThuc << iAo << "i";
    else cout << iThuc << "+" << iAo << "i";
}
void soPhuc::Tong(soPhuc another)
{
    soPhuc tmp = *this;
    tmp.iThuc += another.iThuc;
    tmp.iAo += another.iAo;
    tmp.Xuat();
}

void soPhuc::Hieu(soPhuc another)
{
    soPhuc tmp = *this;
    tmp.iThuc -= another.iThuc;
    tmp.iAo -= another.iAo;
    tmp.Xuat();
}

void soPhuc::Tich(soPhuc another)
{
    soPhuc tmp = *this;
    tmp.iThuc = (this->iThuc*another.iThuc - this->iAo*another.iAo);
    tmp.iAo= (this->iThuc*another.iAo + this->iAo*another.iThuc);
    tmp.Xuat();
}

void soPhuc::Thuong(soPhuc another)
{
    soPhuc tmp = *this;
    double z = another.iThuc*another.iThuc + another.iAo*another.iAo;
    tmp.iThuc = (this->iThuc*another.iThuc + this->iAo*another.iAo) / z;
    tmp.iAo = (another.iThuc*this->iAo - this->iThuc*another.iAo) / z;
    tmp.Xuat();
}

void quanly::menu()
{
    soPhuc sp1, sp2;
    while (1)
    {
        cout << "---------------==MENU==---------------\n";
        cout << "1. Nhap 2 so phuc.\n";
        cout << "2. Xuat 2 so phuc.\n";
        cout << "3. Tinh tong so phuc.\n";
        cout << "4. Tinh hieu so phuc.\n";
        cout << "5. Tinh tich so phuc.\n";
        cout << "6. Tinh thuong so phuc.\n";
        cout << "0. Thoat chuong trinh.\n";
        cout << "---------------========---------------\n";
        cout << "Vui long nhap lua chon: ";
        cin >> lc;
        switch(lc)
        {
        case 1:
            cout << "SO PHUC 1: \n"; sp1.Nhap();
            cout << "\nSO PHUC 2: \n"; sp2.Nhap();
            break;
        case 2:
            cout << "SO PHUC 1: "; sp1.Xuat();
            cout << "\nSO PHUC 2: "; sp2.Xuat();
            cout << endl;
            break;
        case 3:
            cout << "("; sp1.Xuat(); cout << ") + ("; sp2.Xuat(); cout << ") = "; sp1.Tong(sp2);
            cout << endl;
            break;
        case 4:
            cout << "("; sp1.Xuat(); cout << ") - ("; sp2.Xuat(); cout << ") = "; sp1.Hieu(sp2);
            cout << endl;
            break;
        case 5:
            cout << "("; sp1.Xuat(); cout << ") x ("; sp2.Xuat(); cout << ") = "; sp1.Tich(sp2);
            cout << endl;
            break;
        case 6:
            cout << "("; sp1.Xuat(); cout << ") : ("; sp2.Xuat(); cout << ") = "; sp1.Thuong(sp2);
            cout << endl;
            break;
        case 0:
            cout << "THOAT CHUONG TRINH!\n";
            return;
        }
    }
}
