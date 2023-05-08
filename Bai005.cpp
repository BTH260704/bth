#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

class CSoPhuc {
private:
	float Thuc;
	float Ao;
public:
	void KhoiTao();
	void KhoiTao(float, float);
	void KhoiTao(CSoPhuc&);
	CSoPhuc();
	CSoPhuc(float, float);
	CSoPhuc(CSoPhuc&);
	void Nhap();
	friend istream& operator >> (istream&, CSoPhuc&);
	void Xuat();
	friend ostream& operator << (ostream&, CSoPhuc&);
	float GetThuc();
	float GetAo();
	void SetThuc(float);
	void SetAo(float);
	CSoPhuc& operator = (const CSoPhuc& x);

	CSoPhuc Tong(const CSoPhuc&);
	CSoPhuc Hieu(const CSoPhuc&);
	CSoPhuc Tich(const CSoPhuc&);
	CSoPhuc Thuong(const CSoPhuc&);
	CSoPhuc LuyThua(int);

	CSoPhuc operator+ (const CSoPhuc&);
	CSoPhuc operator- (const CSoPhuc&);
	CSoPhuc operator* (const CSoPhuc&);
	CSoPhuc operator/ (const CSoPhuc&);
	CSoPhuc operator^ (int);
	CSoPhuc operator+= (const CSoPhuc&);
	CSoPhuc operator-= (const CSoPhuc&);
	CSoPhuc operator*= (const CSoPhuc&);
	CSoPhuc operator/= (const CSoPhuc&);

	float Module();
	CSoPhuc LienHop();

	int operator>(const CSoPhuc&);
	int operator<( CSoPhuc&);
	int operator>=( CSoPhuc&);
	int operator<=( CSoPhuc&);
	int operator==( CSoPhuc&);
	int operator!=( CSoPhuc&);

	int ktThuc();
	int ktThuanAo();
	int ktThuoc1();
	int ktThuoc2();
	int ktThuoc3();
	int ktThuoc4();
};

int main() {
	return 0;
}

void CSoPhuc::KhoiTao() {
	Thuc = 0;
	Ao = 0;
}

void CSoPhuc::KhoiTao(float thth, float aoao) {
	Thuc = thth;
	Ao = aoao;
}

void CSoPhuc::KhoiTao(CSoPhuc& x) {
	Thuc = x.Thuc;
	Ao = x.Ao;
}

CSoPhuc::CSoPhuc() {
	Thuc = 0;
	Ao = 0;
}

CSoPhuc::CSoPhuc(float thth, float aoao) {
	Thuc = thth;
	Ao = aoao;
}

CSoPhuc::CSoPhuc(CSoPhuc& x) {
	Thuc = x.Thuc;
	Ao = x.Ao;
}

void CSoPhuc::Nhap() {
	cout << "Nhap thuc: ";
	cin >> Thuc;
	cout << "Nhap ao: ";
	cin >> Ao;
}

istream& operator>>(istream& is, CSoPhuc& x) {
	cout << "Nhap Thuc: ";
	is >> x.Thuc;
	cout << "Nhap ao: ";
	is >> x.Ao;
	return is;
}

void CSoPhuc::Xuat() {
	cout << Thuc;
	if (Ao == 0)
		return;
	if (Ao > 0)
		cout << " + " << Ao;
	if (Ao < 0)
		cout << " - " << abs(Ao);
	cout << "i";
}

ostream& operator << (ostream& os, CSoPhuc& x) {
	os << x.Thuc;
	if (x.Ao == 0)
		return os;
	if (x.Ao > 0)
		os << " + " << x.Ao;
	if (x.Ao < 0)
		os << " - " << abs(x.Ao);
	os << "i";
	return os;
}

float CSoPhuc::GetThuc() {
	return this->Thuc;
}

float CSoPhuc::GetAo() {
	return this->Ao;
}

void CSoPhuc::SetThuc(float thth) {
	Thuc = thth;
}

void CSoPhuc::SetAo(float aoao) {
	Ao = aoao;
}

CSoPhuc& CSoPhuc::operator = (const CSoPhuc& x) {
	Thuc = x.Thuc;
	Ao = x.Ao;
	return *this;
}

CSoPhuc CSoPhuc::Tong(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = Thuc + x.Thuc;
	temp.Ao = Ao + x.Ao;
	return temp;
}

CSoPhuc CSoPhuc::Hieu(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = Thuc - x.Thuc;
	temp.Ao = Ao - x.Ao;
	return temp;
}

CSoPhuc CSoPhuc::Tich(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = (Thuc * x.Thuc - Ao * x.Ao);
	temp.Ao = (Thuc * x.Ao - Ao * x.Thuc);
	return temp;
}

CSoPhuc CSoPhuc::Thuong(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = (Thuc * x.Thuc + Ao * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	temp.Ao = ( Ao * x.Thuc - Thuc * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	return temp;
}

CSoPhuc CSoPhuc::LuyThua(int n) {
	CSoPhuc temp(1, 0);
	for (int i = 1; i <= n; i++)
		temp = temp * *this;
	return temp;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = Thuc + x.Thuc;
	temp.Ao = Ao + x.Ao;
	return temp;
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = Thuc - x.Thuc;
	temp.Ao = Ao - x.Ao;
	return temp;
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = (Thuc * x.Thuc - Ao * x.Ao);
	temp.Ao = (Thuc * x.Ao - Ao * x.Thuc);
	return temp;
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& x) {
	CSoPhuc temp;
	temp.Thuc = (Thuc * x.Thuc + Ao * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	temp.Ao = (Ao * x.Thuc - Thuc * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	return temp;
}

CSoPhuc CSoPhuc::operator^(int n) {
	CSoPhuc temp(1, 0);
	for (int i = 1; i <= n; i++)
		temp = temp * *this;
	return temp;
}

CSoPhuc CSoPhuc::operator+= (const CSoPhuc& x) {
	Thuc = Thuc + x.Thuc;
	Ao = Ao + x.Ao;
	return *this;
}

CSoPhuc CSoPhuc::operator-= (const CSoPhuc& x) {
	Thuc = Thuc - x.Thuc;
	Ao = Ao - x.Ao;
	return *this;
}

CSoPhuc CSoPhuc::operator*= (const CSoPhuc& x) {
	Thuc = Thuc * x.Thuc - Ao * x.Ao;
	Ao = x.Ao * Thuc - Ao * x.Thuc;
	return *this;
}

CSoPhuc CSoPhuc::operator/= (const CSoPhuc& x) {
	Thuc = (Thuc * x.Thuc + Ao * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	Ao = (Ao * x.Thuc - Thuc * x.Ao) / (x.Thuc * x.Thuc + x.Ao * x.Ao);
	return *this;
}

float CSoPhuc::Module() {
	return sqrt(Thuc * Thuc + Ao * Ao);
}

CSoPhuc CSoPhuc::LienHop() {
	CSoPhuc temp;
	temp.Thuc = Thuc;
	temp.Ao = -Ao;
	return temp;
}

int CSoPhuc::operator>(const CSoPhuc& x) {
	if (Thuc * Thuc + Ao * Ao > x.Thuc * x.Thuc + x.Ao * x.Ao)
		return 1;
	return 0;
}

int CSoPhuc::operator>=( CSoPhuc& x) {
	CSoPhuc temp = *this;
	float a = temp.Module();
	CSoPhuc temp2 = x;
	float b = temp2.Module();
	if (a >= b)
		return 1;
	return 0;
}

int CSoPhuc::operator<(CSoPhuc& x) {
	CSoPhuc temp = *this;
	float a = temp.Module();
	CSoPhuc temp2 = x;
	float b = temp2.Module();
	if (a < b)
		return 1;
	return 0;
}

int CSoPhuc::operator<=(CSoPhuc& x) {
	CSoPhuc temp = *this;
	float a = temp.Module();
	CSoPhuc temp2 = x;
	float b = temp2.Module();
	if (a <= b)
		return 1;
	return 0;
}


int CSoPhuc::operator!=(CSoPhuc& x) {
	CSoPhuc temp = *this;
	float a = temp.Module();
	CSoPhuc temp2 = x;
	float b = temp2.Module();
	if (a != b)
		return 1;
	return 0;
}

int CSoPhuc::operator==(CSoPhuc& x) {
	CSoPhuc temp = *this;
	float a = temp.Module();
	CSoPhuc temp2 = x;
	float b = temp2.Module();
	if (a == b)
		return 1;
	return 0;
}

int CSoPhuc::ktThuc() {
	if (Ao == 0)
		return 1;
	return 0;
}

int CSoPhuc::ktThuanAo() {
	if (Thuc == 0 && Ao == 0)
		return 1;
	return 0;
}

int CSoPhuc::ktThuoc1() {
	if (Thuc > 0 && Ao > 0)
		return 1;
	return 0;
}

int CSoPhuc::ktThuoc2() {
	if (Thuc < 0 && Ao > 0)
		return 1;
	return 0;
}

int CSoPhuc::ktThuoc3() {
	if (Thuc < 0 && Ao < 0)
		return 1;
	return 0;
}

int CSoPhuc::ktThuoc4() {
	if (Thuc > 0 && Ao < 0)
		return 1;
	return 0;
}