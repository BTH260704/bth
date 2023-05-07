#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class CDiem
{
private:
    float x;
    float y;

public:
    // Nhom cac phuong thuc khoi tao:
    void KhoiTao();
    void KhoiTao(float, float);
    void KhoiTao(const CDiem &);
    CDiem();
    CDiem(float, float);
    CDiem(const CDiem &);
    void Nhap();
    friend istream &operator>>(istream &, CDiem &);

    // Nhom cac phuong thuc cung cap thong tin:
    void Xuat();
    friend ostream &operator<<(ostream &, CDiem &);
    float Getx();
    float Gety();

    // Nhom cac phuong thuc cap nhat thong tin:
    void Setx(float);
    void Sety(float);

    // Nhom cac phuong thuc kiem tra:
    int isTrungGoc();
    int isTrung(const CDiem &);
    int isKhongTrung(const CDiem &);
    int isThuocHoanh();
    int isThuocTung();
    int operator==(const CDiem &);
    int operator!=(const CDiem &);
    int operator>(const CDiem &);
    int operator>=(const CDiem &);
    int operator<(const CDiem &);
    int operator<=(const CDiem &);

    // Nhom cac phuong thuc xu ly
    CDiem &operator=(const CDiem &);
    float KhoangCachGoc();
    float KhoangCach(const CDiem &);
    CDiem DoiXungGoc();
    CDiem DoiXungHoanh();
    CDiem DoiXungTung();
    CDiem ToaDoTrungDiem(const CDiem &);
    ~CDiem();
};
class CTamGiac
{
private:
    CDiem A;
    CDiem B;
    CDiem C;

public:
    // Nhom cac phuong thuc khoi tao
    void KhoiTao();
    void KhoiTao(CDiem, CDiem, CDiem);
    void KhoiTao(const CTamGiac &);
    CTamGiac();
    CTamGiac(CDiem, CDiem, CDiem);
    CTamGiac(const CTamGiac &);
    void Nhap();
    friend istream &operator>>(istream &, CTamGiac &);
    // Nhom cac phuong thuc cung cap thong tin
    void Xuat();
    friend ostream &operator<<(ostream &, CTamGiac &);
    CDiem getA();
    CDiem getB();
    CDiem getC();
    float getAx();
    float getBx();
    float getCx();
    float getAy();
    float getBy();
    float getCy();
    // Nhom cac phuong thuc cap nhat thong tin
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
    // Nhom cac phuong thuc kiem tra
    int IsDeu();
    int IsCan();
    int IsVuongCan();
    int IsVuong();
    // Nhom cac phuong thuc xu ly
    int operator==(const CTamGiac &);
    int operator!=(const CTamGiac &);
    int operator>(const CTamGiac &);
    int operator>=(const CTamGiac &);
    int operator<(const CTamGiac &);
    int operator<=(const CTamGiac &);
    float DienTich();
    float ChuVi();
    CDiem TrongTam();
    CDiem TrucTam();
    ~CTamGiac();
};
int main()
{
    return 0;
}

// Dinh nghia cac phuong thuc khoi tao:
void CDiem::KhoiTao()
{
    x = 0;
    y = 0;
}
void CDiem::KhoiTao(float xx, float yy)
{
    x = xx;
    y = yy;
}
void CDiem::KhoiTao(const CDiem &a)
{
    x = a.x;
    y = a.y;
}
CDiem::CDiem()
{
    x = 1;
    y = 1;
}
CDiem::CDiem(float xx, float yy)
{
    x = xx;
    y = yy;
}
CDiem::CDiem(const CDiem &a)
{
    x = a.x;
    y = a.y;
}
void CDiem::Nhap()
{
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
}
istream &operator>>(istream &is, CDiem &a)
{
    cout << "Nhap x: ";
    is >> a.x;
    cout << "Nhap y: ";
    is >> a.y;
    return is;
}

// Dinh nghia cac phuong thuc cung cap thong tin:
void CDiem::Xuat()
{
    cout << "(" << x << "," << y << ")" << endl;
}
ostream &operator<<(ostream &os, CDiem &a)
{
    os << "(" << a.x << "," << a.y << ")" << endl;
    return os;
}
float CDiem::Getx()
{
    return x;
}
float CDiem::Gety()
{
    return y;
}

// Dinh nghia cac phuong thuc cap nhat thong tin:
void CDiem::Setx(float a)
{
    x = a;
}
void CDiem::Sety(float a)
{
    y = a;
}

// Dinh nghia cac phuong thuc kiem tra:
int CDiem::isTrungGoc()
{
    if (!x && !y)
        return 1;
    return 0;
}
int CDiem::isTrung(const CDiem &a)
{
    if (x == a.x && y == a.y)
        return 1;
    return 0;
}
int CDiem::isKhongTrung(const CDiem &a)
{
    if (!(x == a.x && y == a.y))
        return 1;
    return 0;
}
int CDiem::isThuocHoanh()
{
    if (!y)
        return 1;
    return 0;
}
int CDiem::isThuocTung()
{
    if (!x)
        return 1;
    return 0;
}
int CDiem::operator==(const CDiem &a)
{
    if (sqrt(x * x + y * y) == sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}
int CDiem::operator!=(const CDiem &a)
{
    if (sqrt(x * x + y * y) != sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}
int CDiem::operator>(const CDiem &a)
{
    if (sqrt(x * x + y * y) > sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}
int CDiem::operator>=(const CDiem &a)
{
    if (sqrt(x * x + y * y) >= sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}
int CDiem::operator<(const CDiem &a)
{
    if (sqrt(x * x + y * y) < sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}
int CDiem::operator<=(const CDiem &a)
{
    if (sqrt(x * x + y * y) <= sqrt(a.x * a.x * +a.y * a.y))
        return 1;
    return 0;
}

// Dinh nghia cac phuong thuc xu ly:
CDiem &CDiem::operator=(const CDiem &a)
{
    x = a.x;
    y = a.y;
    return *this;
}
float CDiem::KhoangCachGoc()
{
    return sqrt(x * x + y * y);
}
float CDiem::KhoangCach(const CDiem &a)
{
    return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
}
CDiem CDiem::DoiXungGoc()
{
    CDiem a;
    a.x = -x;
    a.y = -y;
    return a;
}
CDiem CDiem::DoiXungHoanh()
{
    CDiem a;
    a.x = x;
    a.y = -y;
    return a;
}
CDiem CDiem::DoiXungTung()
{
    CDiem a;
    a.x = -x;
    a.y = y;
    return a;
}
CDiem CDiem::ToaDoTrungDiem(const CDiem &a)
{
    CDiem b;
    b.x = (x + a.x) / 2;
    b.y = (y + a.y) / 2;
    return b;
}
CDiem::~CDiem()
{
    return;
}

// Lop Tam Giac
// Nhom cac phuong thuc khoi tao
void CTamGiac::KhoiTao()
{
    A.KhoiTao();
    B.KhoiTao();
    C.KhoiTao();
}

void CTamGiac::KhoiTao(CDiem aa, CDiem bb, CDiem cc)
{
    A = aa;
    B = bb;
    C = cc;
}

void CTamGiac::KhoiTao(const CTamGiac &tg)
{
    A = tg.A;
    B = tg.B;
    C = tg.C;
}

CTamGiac::CTamGiac()
{
    A.KhoiTao();
    B.KhoiTao();
    C.KhoiTao();
}

CTamGiac::CTamGiac(CDiem aa, CDiem bb, CDiem cc)
{
    A = aa;
    B = bb;
    C = cc;
}

CTamGiac::CTamGiac(const CTamGiac &tg)
{
    A = tg.A;
    B = tg.B;
    C = tg.C;
}

void CTamGiac::Nhap()
{
    cout << "Nhap toa do diem A:\n";
    cin >> A;
    cout << "Nhap toa do diem B:\n";
    cin >> B;
    cout << "Nhap toa do diem C:\n";
    cin >> C;
}

istream &operator>>(istream &is, CTamGiac &tg)
{
    cout << "Nhap toa do diem A:\n";
    is >> tg.A;
    cout << "Nhap toa do diem B:\n";
    is >> tg.B;
    cout << "Nhap toa do diem C:\n";
    is >> tg.C;
    return is;
}

// Nhom cac phuong thuc cung cap thong tin
void CTamGiac::Xuat()
{
    cout << "Toa do diem A: " << A << endl;
    cout << "Toa do diem B: " << B << endl;
    cout << "Toa do diem C: " << C << endl;
}

ostream &operator<<(ostream &os, CTamGiac &tg)
{
    os << "Toa do diem A: " << tg.A << endl;
    os << "Toa do diem B: " << tg.B << endl;
    os << "Toa do diem C: " << tg.C << endl;
    return os;
}

CDiem CTamGiac::getA()
{
    return A;
}

CDiem CTamGiac::getB()
{
    return B;
}

CDiem CTamGiac::getC()
{
    return C;
}
float CTamGiac::getAx()
{
    return A.Getx();
}

float CTamGiac::getBx()
{
    return B.Getx();
}

float CTamGiac::getCx()
{
    return C.Getx();
}

float CTamGiac::getAy()
{
    return A.Gety();
}

float CTamGiac::getBy()
{
    return B.Gety();
}

float CTamGiac::getCy()
{
    return C.Gety();
}

// Nhom cac phuong thuc cap nhat thong tin
CTamGiac &CTamGiac::operator=(CTamGiac &tg)
{
    A = tg.A;
    B = tg.B;
    C = tg.C;
    return *this;
}

void CTamGiac::setAx(float x)
{
    A.Setx(x);
}

void CTamGiac::setAy(float y)
{
    A.Sety(y);
}

void CTamGiac::setBx(float x)
{
    B.Setx(x);
}

void CTamGiac::setBy(float y)
{
    B.Sety(y);
}

void CTamGiac::setCx(float x)
{
    C.Setx(x);
}

void CTamGiac::setCy(float y)
{
    C.Sety(y);
}

void CTamGiac::setA(CDiem aa)
{
    A = aa;
}

void CTamGiac::setB(CDiem bb)
{
    B = bb;
}

void CTamGiac::setC(CDiem cc)
{
    C = cc;
}

void CTamGiac::setA(float x, float y)
{
    A.Setx(x);
    A.Sety(y);
}

void CTamGiac::setB(float x, float y)
{
    B.Setx(x);
    B.Sety(y);
}

void CTamGiac::setC(float x, float y)
{
    C.Setx(x);
    C.Sety(y);
}

// Nhom cac phuong thuc xu ly

float CTamGiac::DienTich()
{
    float a = A.KhoangCach(B);
    float b = A.KhoangCach(C);
    float c = C.KhoangCach(B);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
float CTamGiac::ChuVi()
{
    float a = A.KhoangCach(B);
    float b = A.KhoangCach(C);
    float c = C.KhoangCach(B);
    return (a + b + c);
}
CDiem CTamGiac::TrongTam()
{
    CDiem temp;
    temp.Setx((A.Getx() + B.Getx() + C.Getx()) / 3);
    temp.Sety((A.Gety() + B.Gety() + C.Gety()) / 3);
    return temp;
}
CDiem CTamGiac::TrucTam()
{
    CDiem H;
    float A1 = getCx() - getBx();
    float B1 = getCy() - getBy();
    float C1 = getAx() * (getCx() - getBx()) + getAy() * (getCy() - getBy());
    float A2 = getCy() - getBy();
    float B2 = getCx() - getAx();
    float C2 = getAx() * (getCy() - getAy()) + getBy() * (getCx() - getAx());
    float detH = A1 * B2 - A2 * B1;
    float detHx = C1 * B2 - C2 * B1;
    float detHy = A1 * C2 - A2 * C1;

    if (detH != 0)
    {
        H.Setx(detHx / detH);
        H.Sety(detHy / detH);
    }
    else
    {
        H.Setx(0);
        H.Sety(0);
    }

    return H;
}
int CTamGiac::operator==(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss == 0)
        return 1;
    return 0;
}
int CTamGiac::operator!=(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss != 0)
        return 1;
    return 0;
}
int CTamGiac::operator>(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss > 0)
        return 1;
    return 0;
}
int CTamGiac::operator>=(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss >= 0)
        return 1;
    return 0;
}
int CTamGiac::operator<(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss < 0)
        return 1;
    return 0;
}
int CTamGiac::operator<=(const CTamGiac &tt)
{
    CTamGiac temp = tt;
    float ss = DienTich() - temp.DienTich();
    if (ss <= 0)
        return 1;
    return 0;
}
// Nhom cac phuong thuc kiem tra
int CTamGiac::IsDeu()
{
    float a = A.KhoangCach(B);
    float b = A.KhoangCach(C);
    float c = B.KhoangCach(C);
    if (a == b && b == c && a == c)
        return 1;
    return 0;
}
int CTamGiac::IsCan()
{
    float a = A.KhoangCach(B);
    float b = A.KhoangCach(C);
    float c = B.KhoangCach(C);
    if (IsDeu() == 0 && (a == b || b == c || a == c))
        return 1;
    return 0;
}
int CTamGiac::IsVuongCan()
{
    float a = A.KhoangCach(B);
    float b = A.KhoangCach(C);
    float c = B.KhoangCach(C);
    if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        return 1;
    return 0;
}
int CTamGiac::IsVuong()
{
    if (IsVuong() == 1 && IsCan() == 1)
        return 1;
    return 0;
}
CTamGiac::~CTamGiac()
{
    return;
}