#include <iostream>
using namespace std;

class CDiem
{
private:
    float x;
    float y;

public:
    CDiem();
    CDiem(float, float);
    CDiem(const CDiem &);
    float getX()
    {
        return this->x;
    }

    void setX(float x)
    {
        this->x = x;
    }

    float getY()
    {
        return this->y;
    }

    void setY(float y)
    {
        this->y = y;
    }
    ~CDiem();
};
class CTamGiac
{
private:
    CDiem a;
    CDiem b;
    CDiem c;

public:
    // Nhóm phương thức khởi tạo
    void KhoiTao();
    void KhoiTao(CDiem, CDiem, CDiem);
    void KhoiTao(const CTamGiac &);
    CTamGiac();
    CTamGiac(CDiem, CDiem, CDiem);
    CTamGiac(const CTamGiac &);
    void Nhap();
    friend istream &operator>>(istream &, CTamGiac &);
    // Nhóm phương thức cung cấp thông tin
    void Xuat();
    friend ostream &operator<<(ostream &, TamGiac &);
    CDiem getA();
    CDiem getB();
    CDiem getC();
    // Nhóm phương thức cập nhật thông tin
    CTamGiac &operator=(CTamGiac &);
    void setAx(float);
    void setAy(float);
    void setBx(float);
    void setBy(float);
    void setCx(float);
    void setCy(float);
    void setA(CDiem);
    void setB(CDiem);
    void setC(CDiem);
    void setA(float, float);
    void setC(float, float);
    void setB(float, float);
    // Nhóm phương thức kiểm tra
    int IsDeu();
    int IsCan();
    int IsVuongCan();
    int IsVuong();
    // Nhóm phương thức xử lý
    int operator==(const CTamGiac &);
    int operator!=(const CTamGiac &);
    int operator>(const CTamGiac &);
    int operator>=(const CTamGiac &);
    int operator<(const CTamGiac &);
    int operator<=(const CTamGiac &);
    float CTamGiac::DienTich();
    float CTamGiac::ChuVi();
    CDiem CTamGiac::TrongTam();
    CDiem CTamGiac::TrucTam();
    int CTamGiac::IsDeu();
    int CTamGiac::IsCan();
    int CTamGiac::IsVuong();
    int CTamGiac::IsVuongCan();
    ~CTamGiac();
};
int main()
{
    return 0;
}

CDiem::CDiem()
{
    x = y = 0;
}
CDiem::CDiem(float xx, float yy)
{
    x = xx;
    y = yy;
}
CDiem::CDiem(const CDiem &temp)
{
    x = temp.x;
    y = temp.y;
}
CDiem::~CDiem()
{
    return;
}
CTamGiac::CTamGiac()
{
}
CTamGiac::CTamGiac(CDiem a, CDiem b, CDiem c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
CTamGiac::CTamGiac(const CTamGiac &temp)
{
    *this = temp;
}
CTamGiac::~CTamGiac()
{
    return;
}