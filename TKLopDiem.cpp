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
	void KhoiTao(const CDiem&);
	CDiem();
	CDiem(float, float);
	CDiem(const CDiem&);
	void Nhap();
	friend istream& operator>>(istream&, CDiem&);

	// Nhom cac phuong thuc cung cap thong tin:
	void Xuat();
	friend ostream& operator<<(ostream&, CDiem&);
	float Getx();
	float Gety();

	// Nhom cac phuong thuc cap nhat thong tin:
	void Setx(float);
	void Sety(float);

	// Nhom cac phuong thuc kiem tra:
	int isTrungGoc();
	int isTrung(const CDiem&);
	int isKhongTrung(const CDiem&);
	int isThuocHoanh();
	int isThuocTung();
	int operator==(const CDiem&);
	int operator!=(const CDiem&);
	int operator>(const CDiem&);
	int operator>=(const CDiem&);
	int operator<(const CDiem&);
	int operator<=(const CDiem&);

	// Nhom cac phuong thuc xu ly: 
	CDiem& operator=(const CDiem&);
	float KhoangCachGoc();
	float KhoangCach(const CDiem&);
	CDiem DoiXungGoc();
	CDiem DoiXungHoanh();
	CDiem DoiXungTung();
	CDiem ToaDoTrungDiem(const CDiem&);
	~CDiem();
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
void CDiem::KhoiTao(const CDiem& a)
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
CDiem::CDiem(const CDiem& a)
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
istream& operator>>(istream& is, CDiem& a)
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
ostream& operator<<(ostream& os, CDiem& a)
{
	os << "(" << a.x << "," << a.y << ")" << endl;
	return os;
}
float CDiem::Getx()
{
	return x;
}float CDiem::Gety()
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
int CDiem::isTrung(const CDiem& a)
{
	if (x == a.x && y == a.y)
		return 1;
	return 0;
}
int CDiem::isKhongTrung(const CDiem& a)
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
int CDiem::operator==(const CDiem& a)
{
	if (sqrt(x * x + y * y) == sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}
int CDiem::operator!=(const CDiem& a)
{
	if (sqrt(x * x + y * y) != sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}
int CDiem::operator>(const CDiem& a)
{
	if (sqrt(x * x + y * y) > sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}
int CDiem::operator>=(const CDiem& a)
{
	if (sqrt(x * x + y * y) >= sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}
int CDiem::operator<(const CDiem& a)
{
	if (sqrt(x * x + y * y) < sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}
int CDiem::operator<=(const CDiem& a)
{
	if (sqrt(x * x + y * y) <= sqrt(a.x * a.x * +a.y * a.y))
		return 1;
	return 0;
}

// Dinh nghia cac phuong thuc xu ly:
CDiem& CDiem::operator=(const CDiem& a)
{
	x = a.x;
	y = a.y;
	return *this;
}
float CDiem::KhoangCachGoc()
{
	return sqrt(x * x + y * y);
}
float CDiem::KhoangCach(const CDiem& a)
{
	return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y));
}
CDiem CDiem::DoiXungGoc()
{
	CDiem a;
	a.x = -x;
	a.y = -y;
	return a;
}CDiem CDiem::DoiXungHoanh()
{
	CDiem a;
	a.x = x;
	a.y = -y;
	return a;
}CDiem CDiem::DoiXungTung()
{
	CDiem a;
	a.x = -x;
	a.y = y;
	return a;
}
CDiem CDiem::ToaDoTrungDiem(const CDiem& a)
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