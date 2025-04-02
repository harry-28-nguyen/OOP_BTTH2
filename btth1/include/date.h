#ifndef DATE_H
#define DATE_H


class date
{
private:
    int iNgay, iThang, iNam;
public:
    date();
    date(int ngay, int thang, int nam);
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif // DATE_H
