#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
	float x;
	float y;
	float z;
public:
	void KhoiTao();
	void KhoiTao(float, float, float);
	void KhoiTao(const CDiemKhongGian&);
	CDiemKhongGian();
	CDiemKhongGian(float, float, float);
	CDiemKhongGian(const CDiemKhongGian&);
	void Nhap();
	friend istream& operator>>(istream&, CDiemKhongGian&);

	void Xuat();
	friend ostream& operator<<(ostream&, CDiemKhongGian&);
	float Getx();
	float Gety();
	float Getz();

	void Setx(float);
	void Sety(float);
	void Setz(float);

	int operator==(const CDiemKhongGian&);
	int operator!=(const CDiemKhongGian&);
	int operator>(const CDiemKhongGian&);
	int operator>=(const CDiemKhongGian&);
	int operator<(const CDiemKhongGian&);
	int operator<=(const CDiemKhongGian&);

	float KhoangCach(const CDiemKhongGian&);
};

class CHinhCau
{
private:
	CDiemKhongGian I;
	float R;
public:
	// Nhom cac phuong thuc khoi tao:
	void KhoiTao();
	void KhoiTao(CDiemKhongGian, float);
	void KhoiTao(const CHinhCau&);
	CHinhCau();
	CHinhCau(CDiemKhongGian, float);
	CHinhCau(const CHinhCau&);
	void Nhap();
	friend istream& operator>>(istream&, CHinhCau&);

	// Nhom cac phuong thuc cung cap thong tin:
	void Xuat();
	friend ostream& operator<<(ostream&, CHinhCau&);
	CDiemKhongGian GetI();
	float GetR();

	// Nhom cac phuong thuc cap nhat thong tin: 
	void SetI(CDiemKhongGian);
	void SetR(float);

	// Nhom cac phuong thuc kiem tra:
	int isTrungNhau(const CHinhCau&);
	int isTiepXucTrong(const CHinhCau&);
	int isTiepXucNgoai(const CHinhCau&);
	int isNamTrong(const CHinhCau&);
	int isNamNgoai(const CHinhCau&);
	int isGiaoNhau(const CHinhCau&);
	int isNamTrong(const CDiemKhongGian&);
	int isNamNgoai(const CDiemKhongGian&);
	int isThuoc(const CDiemKhongGian&);
	int operator==(const CHinhCau&);
	int operator!=(const CHinhCau&);
	int operator>(const CHinhCau&);
	int operator>=(const CHinhCau&);
	int operator<(const CHinhCau&);
	int operator<=(const CHinhCau&);

	// Nhom cac phuong thuc xu ly:
	CHinhCau& operator=(const CHinhCau&);
	float DienTich();
	float TheTich();
};

int main()
{
	return 0;
}

void CDiemKhongGian::KhoiTao()
{
	x = 0;
	y = 0;
	z = 0;
}
void CDiemKhongGian::KhoiTao(float xx, float yy, float zz)
{
	x = xx;
	y = yy;
	z = zz;
}
void CDiemKhongGian::KhoiTao(const CDiemKhongGian& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}
CDiemKhongGian::CDiemKhongGian()
{
	x = 0;
	y = 0;
	z = 0;
}
CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz)
{
	x = xx;
	y = yy;
	z = zz;
}
CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}
void CDiemKhongGian::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
}
istream& operator>>(istream& is, CDiemKhongGian& a)
{
	cout << "Nhap x: ";
	is >> a.x;
	cout << "Nhap y: ";
	is >> a.y;
	cout << "Nhap z: ";
	is >> a.z;
	return is;
}
void CDiemKhongGian::Xuat()
{
	cout << "(" << x << "," << y << "," << z << ")" << endl;
}
ostream& operator<<(ostream& os, CDiemKhongGian& a)
{
	os << "(" << a.x << "," << a.y << "," << a.z << ")" << endl;
	return os;
}
float CDiemKhongGian::Getx()
{
	return x;
}float CDiemKhongGian::Gety()
{
	return y;
}float CDiemKhongGian::Getz()
{
	return z;
}
void CDiemKhongGian::Setx(float xx)
{
	x = xx;
}void CDiemKhongGian::Sety(float yy)
{
	y = yy;
}void CDiemKhongGian::Setz(float zz)
{
	z = zz;
}
int CDiemKhongGian::operator==(const CDiemKhongGian& a)
{
	if (x == a.x && y == a.y && z == a.z)
		return 1;
	return 0;
}
int CDiemKhongGian::operator!=(const CDiemKhongGian& a)
{
	if (!(x == a.x && y == a.y && z == a.z))
		return 1;
	return 0;
}
int CDiemKhongGian::operator>(const CDiemKhongGian& a)
{
	if (x > a.x && y > a.y && z > a.z)
		return 1;
	return 0;
}
int CDiemKhongGian::operator>=(const CDiemKhongGian& a)
{
	if (x >= a.x && y >= a.y && z >= a.z)
		return 1;
	return 0;
}
int CDiemKhongGian::operator<(const CDiemKhongGian& a)
{
	if (x < a.x && y < a.y && z < a.z)
		return 1;
	return 0;
}
int CDiemKhongGian::operator<=(const CDiemKhongGian& a)
{
	if (x <= a.x && y <= a.y && z <= a.z)
		return 1;
	return 0;
}
float CDiemKhongGian::KhoangCach(const CDiemKhongGian& a)
{
	return sqrt((a.x - x) * (a.x - x) + (a.y - y) * (a.y - y) + (a.z - z) * (a.z - z));
}

// Dinh nghia cac phuong thuc khoi tao:
void CHinhCau::KhoiTao()
{
	I.KhoiTao();
	R = 0;
}
void CHinhCau::KhoiTao(CDiemKhongGian II, float RR)
{
	I = II;
	R = RR;
}
void CHinhCau::KhoiTao(const CHinhCau& a)
{
	I = a.I;
	R = a.R;
}
CHinhCau::CHinhCau()
{
	R = 0;
}
CHinhCau::CHinhCau(CDiemKhongGian II, float RR)
{
	I = II;
	R = RR;
}
CHinhCau::CHinhCau(const CHinhCau& a)
{
	I = a.I;
	R = a.R;
}
void CHinhCau::Nhap()
{
	cout << "Nhap toa do tam: " << endl;
	I.Nhap();
	cout << "Nhap ban kinh: ";
	cin >> R;
}
istream& operator>>(istream& is, CHinhCau& a)
{
	cout << "Nhap toa do tam: " << endl;
	is >> a.I;
	cout << "Nhap ban kinh: ";
	is >> a.R;
	return is;
}

// Dinh nghia cac phuong thuc cung cap thong tin:
void CHinhCau::Xuat()
{
	cout << "Toa do tam: ";
	I.Xuat();
	cout << "Ban kinh: " << R << endl;
}
ostream& operator<<(ostream& os, CHinhCau& a)
{
	os << "Toa do tam: " << a.I;
	os << "Ban kinh: " << a.R << endl;
	return os;
}
CDiemKhongGian CHinhCau::GetI()
{
	return I;
}
float CHinhCau::GetR()
{
	return R;
}

// Dinh nghia cac phuong thuc cap nhat thong tin: 
void CHinhCau::SetI(CDiemKhongGian II)
{
	I = II;
}
void CHinhCau::SetR(float RR)
{
	R = RR;
}

// Dinh nghia cac phuong thuc kiem tra: 
int CHinhCau::isTrungNhau(const CHinhCau& PP)
{
	if (I == PP.I && R == PP.R)
		return 1;
	return 0;
}
int CHinhCau::isTiepXucTrong(const CHinhCau& PP)
{
	float distance = I.KhoangCach(PP.I) + R;
	if (distance == PP.R)
		return 1;
	return 0;
}
int CHinhCau::isTiepXucNgoai(const CHinhCau& PP)
{
	float distance = I.KhoangCach(PP.I);
	if (distance == R + PP.R)
		return 1;
	return 0;
}
int CHinhCau::isNamTrong(const CHinhCau& PP)
{
	float distance = I.KhoangCach(PP.I) + R;
	if (distance < 2 * PP.R)
		return 1;
	return 0;
}
int CHinhCau::isNamNgoai(const CHinhCau& PP)
{
	float distance = I.KhoangCach(PP.I) + R;
	if (distance > 2 * PP.R)
		return 1;
	return 0;
}
int CHinhCau::isGiaoNhau(const CHinhCau& PP)
{
	if (I.KhoangCach(PP.I) < (R + PP.R))
		return 1;
	return 0;
}
int CHinhCau::isNamTrong(const CDiemKhongGian& a)
{
	if (I.KhoangCach(a) < R)
		return 1;
	return 0;
}
int CHinhCau::isNamNgoai(const CDiemKhongGian& a)
{
	if (I.KhoangCach(a) > R)
		return 1;
	return 0;
}
int CHinhCau::isThuoc(const CDiemKhongGian& a)
{
	if (I.KhoangCach(a) <= R)
		return 1;
	return 0;
}
int CHinhCau::operator==(const CHinhCau& PP)
{
	if (R == PP.R)
		return 1;
	return 0;
}int CHinhCau::operator!=(const CHinhCau& PP)
{
	if (R != PP.R)
		return 1;
	return 0;
}int CHinhCau::operator>(const CHinhCau& PP)
{
	if (R > PP.R)
		return 1;
	return 0;
}int CHinhCau::operator>=(const CHinhCau& PP)
{
	if (R >= PP.R)
		return 1;
	return 0;
}int CHinhCau::operator<(const CHinhCau& PP)
{
	if (R < PP.R)
		return 1;
	return 0;
}int CHinhCau::operator<=(const CHinhCau& PP)
{
	if (R <= PP.R)
		return 1;
	return 0;
}

// Dinh nghia cac phuong thuc xu ly:
CHinhCau& CHinhCau::operator=(const CHinhCau& PP)
{
	I = PP.I;
	R = PP.R;
	return *this;
}
float CHinhCau::DienTich()
{
	return (4 * 3.14 * R * R);
}
float CHinhCau::TheTich()
{
	return (4 * 3.14 * R * R * R / 3);
}
