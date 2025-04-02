#include "date.h"
#include<bits/stdc++.h>
using namespace std;

date::date(){}

date::date(int ngay, int thang, int nam)
{
    this->iNgay = ngay;
    this->iThang = thang;
    this->iNam = nam;
}

void date::Nhap()
{
    cout << "Nhap ngay: ";
    cin >> iNgay;

    cout << "Nhap thang: ";
    cin >> iThang;

    cout << "Nhap nam: ";
    cin >> iNam;
}

void date::Xuat()
{
    cout << iNgay << "/" << iThang << "/" << iNam;
}

void date::NgayThangNamTiepTheo()
{
    if (iNam%400==0 || (iNam%4==0 && iNam%100!=0))
    {
        switch(iThang)
        {
        case 1:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 2:
            if (iNgay == 29)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 3:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 4:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 5:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 6:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 7:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 8:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 9:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 10:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 11:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 12:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang = 1;
                iNam++;
            }
            else iNgay++;
            break;
        default:
            cout << "KHONG DUNG DIEU KIEN THANG. VUI LONG NHAP LAI!";
            cin >> iThang;
        }
    }
    else
    {
        switch(iThang)
        {
        case 1:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 2:
            if (iNgay == 28)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 3:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 4:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 5:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 6:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 7:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 8:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 9:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 10:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 11:
            if (iNgay == 30)
            {
                iNgay = 1;
                iThang++;
            }
            else iNgay++;
            break;
        case 12:
            if (iNgay == 31)
            {
                iNgay = 1;
                iThang = 1;
                iNam++;
            }
            else iNgay++;
            break;
        default:
            cout << "KHONG DUNG DIEU KIEN THANG. VUI LONG NHAP LAI!";
            cin >> iThang;
        }
    }
}
