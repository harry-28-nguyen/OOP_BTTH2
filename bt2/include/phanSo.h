#ifndef PHANSO_H
#define PHANSO_H


class phanSo
{
    public:
        phanSo();
        void Nhap();
        void Xuat();
        void RutGon();
        void QuyDong(phanSo another);
        void Tong(phanSo another);
        void Hieu(phanSo another);
        void Tich(phanSo another);
        void Thuong(phanSo another);
        void SoSanh(phanSo another);
    private:
        int iTu, iMau;
};

class quanly
{
public:
    void menu();
};

#endif // PHANSO_H
