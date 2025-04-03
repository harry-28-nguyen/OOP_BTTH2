#include "phanSo.h"
#include <bits/stdc++.h>
using namespace std;

phanSo::phanSo(){}

void phanSo::Nhap()
{
    cout << "Nhap tu so: "; cin >> iTu;
    do
    {
        cout << "Nhap mau so: "; cin >> iMau;
        if (iMau == 0) cout << "Khong hop le. Mau khong bang 0, vui long nhap lai!\n";
    }while (iMau == 0);
}

void phanSo::Xuat()
{
    if (iMau == 1){
        cout << iTu;
        return;
    }

    else if (iTu % iMau == 0){
        cout << iTu/iMau;
        return;
    }
    cout << iTu << "/" << iMau;
}

int UCLN(int a, int b)
{
    while (a * b != 0){
        if (a < 0) a = -a;
        if (b < 0) b = -b;
        if (a >= b) a = a - b;
        if (b >= a) b = b - a;
    }
    int r = a+b;
    if (a == 0 && b == 0) return -1;
    else {
        if ( r < 0) return r = -r;
        else return r;
    }
}

int BCNN(int a, int b)
{
    return (a*b)/UCLN(a,b);
}

void phanSo::RutGon()
{
    int ucln = UCLN(iTu, iMau);
    iTu /= ucln;
    iMau /= ucln;
}

void phanSo::QuyDong(phanSo another)
{
    int msc = BCNN(iMau, another.iMau);
    iTu *= (msc / iMau);
    another.iTu *= (msc / another.iMau);
    iMau = another.iMau = msc;
}

void phanSo::SoSanh(phanSo another)
{
    phanSo bangoc = *this;
    phanSo bangoc_another = another;

    if (iMau != another.iMau && iTu != another.iTu){
        bangoc.QuyDong(bangoc_another);

        if (bangoc.iTu > bangoc_another.iTu)
        {
            this->Xuat();
            cout << " > ";
            another.Xuat();
        }
        else if (bangoc.iTu < bangoc_another.iTu)
        {
            another.Xuat();
            cout << " > ";
            this->Xuat();
        }
        else cout << "hai phan so bang nhau!\n";
    }
    else if (bangoc.iMau == bangoc_another.iMau){
        if (iTu > another.iTu)
        {
            this->Xuat();
            cout << " > ";
            another.Xuat();
        }
        else if (bangoc.iTu < bangoc_another.iTu)
        {
            another.Xuat();
            cout << " > ";
            this->Xuat();
        }
        else cout << "hai phan so bang nhau!\n";
    }
    else if (bangoc.iTu == bangoc_another.iTu){
        if (iMau < another.iMau)
        {
            this->Xuat();
            cout << " > ";
            another.Xuat();
        }
        else if (iMau > another.iMau)
        {
            another.Xuat();
            cout << " > ";
            this->Xuat();
        }
        else cout << "hai phan so bang nhau!\n";
    }
}

void phanSo::Tong(phanSo another)
{
    phanSo tmp = *this;
    if (tmp.iMau == another.iMau)
    {
        tmp.iTu += another.iTu;
    }
    else
    {
        tmp.QuyDong(another);
        tmp.iTu += another.iTu;
    }
    tmp.RutGon();
    tmp.Xuat();
}

void phanSo::Hieu(phanSo another)
{
    phanSo tmp = *this;
    if (tmp.iMau == another.iMau)
    {
        tmp.iTu -= another.iTu;
    }
    else
    {
        tmp.QuyDong(another);
        tmp.iTu -= another.iTu;
    }
    tmp.RutGon();
    tmp.Xuat();
}

void phanSo::Tich(phanSo another)
{
    phanSo tmp = *this;
    tmp.iTu *= another.iTu;
    tmp.iMau *= another.iMau;
    tmp.RutGon();
    tmp.Xuat();
}

void phanSo::Thuong(phanSo another)
{
    phanSo tmp = *this;
    tmp.iTu *= another.iMau;
    tmp.iMau *= another.iTu;
    tmp.RutGon();
    tmp.Xuat();
}

void quanly::menu()
{
    phanSo ps1, ps2;
    while (1)
    {
        cout << "----------------------==MENU==----------------------\n";
        cout << "1. Nhap 2 phan so.\n";
        cout << "2. Xuat 2 phan so.\n";
        cout << "3. Rut gon 2 phan so.\n";
        cout << "4. Tinh tong phan so.\n";
        cout << "5. Tinh hieu phan so.\n";
        cout << "6. Tinh tich phan so.\n";
        cout << "7. Tinh thuong phan so.\n";
        cout << "8. So sanh phan so.\n";
        cout << "0. Thoat chuong trinh.\n";
        cout << "----------------------========----------------------\n";
        int lc;
        cout << "Vui long nhap lua chon: "; cin >> lc;
        switch(lc)
        {
        case 1:
            cout << "PHAN SO 1:\n";
            ps1.Nhap();
            cout << "\nPHAN SO 2:\n";
            ps2.Nhap();
            break;
        case 2:
            cout << "Phan so 1: ";
            ps1.Xuat();
            cout << "\nPhan so 2: ";
            ps2.Xuat();
            cout << endl;
            break;
        case 3:
            cout << "Phan so 1 sau khi rut gon: ";
            ps1.RutGon(); ps1.Xuat();
            cout << "\nPhan so 2 sau khi rut gon: ";
            ps2.RutGon(); ps2.Xuat();
            cout << endl;
            break;
        case 4:
            ps1.Xuat(); cout << " + "; ps2.Xuat(); cout << " = ";
            ps1.Tong(ps2);
            cout << endl;
            break;
        case 5:
            ps1.Xuat(); cout << " - "; ps2.Xuat(); cout << " = ";
            ps1.Hieu(ps2);
            cout << endl;
            break;
        case 6:
            ps1.Xuat(); cout << " x "; ps2.Xuat(); cout << " = ";
            ps1.Tich(ps2);
            cout << endl;
            break;
        case 7:
            ps1.Xuat(); cout << " : "; ps2.Xuat(); cout << " = ";
            ps1.Thuong(ps2);
            cout << endl;
            break;
        case 8:
            cout << "Ket qua so sanh: ";
            ps1.SoSanh(ps2);
            cout << endl;
            break;
        case 0:
            cout << "THOAT CHUONG TRINH!\n";
            return;
        }
    }
}
