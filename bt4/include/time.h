#ifndef TIME_H
#define TIME_H


class time
{
    public:
        time();
        void Nhap();
        void Xuat();
        void TinhCongThemMotGiay();
    private:
        int iGio, iPhut, iGiay;
};

#endif // TIME_H
