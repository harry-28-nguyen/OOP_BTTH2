#ifndef SOPHUC_H
#define SOPHUC_H


class soPhuc
{
    public:
        soPhuc();
        void Nhap();
        void Xuat();
        void Tong(soPhuc another);
        void Hieu(soPhuc another);
        void Tich(soPhuc another);
        void Thuong(soPhuc another);

    private:
        double iThuc, iAo;
};

class quanly
{
private:
    int lc;
public:
    quanly(){}
    void menu();
};

#endif // SOPHUC_H
