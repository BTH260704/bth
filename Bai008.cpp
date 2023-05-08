#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class CDonThuc {
private:
	float Heso;
	int Somu;
public:
	void KhoiTao();
	void KhoiTao(float, int);
	void KhoiTao(CDonThuc&);
	CDonThuc();
	CDonThuc(float, int);
	CDonThuc(CDonThuc&);
	void Nhap();
	friend istream& operator >> (istream&, CDonThuc&);
	void Xuat();
	friend ostream& operator << (ostream&, CDonThuc&);
	float GetHeso();
	int GetSomu();
	CDonThuc& operator=(const CDonThuc&);
	void SetHeso(float);
	void SetSomu(int);
	int ktBangKhong(CDonThuc&);

	int operator==(CDonThuc&);
	int operator!=(CDonThuc&);
	int operator>(CDonThuc&);
	int operator<(CDonThuc&);
	int operator>=(CDonThuc&);
	int operator<=(CDonThuc&);
	
	CDonThuc Tich(const CDonThuc&);
	CDonThuc Thuong(const CDonThuc&);

	CDonThuc operator*(CDonThuc&);
	CDonThuc operator/(CDonThuc&);
	CDonThuc operator*=(CDonThuc&);
	CDonThuc operator/=(CDonThuc&);

	~CDonThuc();
};

int main() {
	return 1;
}

void CDonThuc::KhoiTao() {
	Heso = 0;
	Somu = 0;
}

void CDonThuc::KhoiTao(float hshs, int smsm) {
	Heso = hshs;
	Somu = smsm;
}

void CDonThuc::KhoiTao(CDonThuc&x) {
	Heso = x.Heso;
	Somu = x.Somu;
}

CDonThuc::CDonThuc() {
	Heso = 0;
	Somu = 0;
}

CDonThuc::CDonThuc(float hshs, int smsm) {
	Heso = hshs;
	Somu = smsm;
}

CDonThuc::CDonThuc(CDonThuc& x) {
	Heso = x.Heso;
	Somu = x.Somu;
}

void CDonThuc::Nhap() {
	cout << "Nhap he so: ";
	cin >> Heso;
	cout << "Nhap so mu: ";
	cin >> Somu;
}

istream& operator>>(istream& is, CDonThuc& x) {
	cout << "Nhap he so: ";
	is >> x.Heso;
	cout << "Nhap so mu: ";
	is >> x.Somu;
	return is;
}

void CDonThuc::Xuat() {
	if (Heso == 0||Somu==0) {
		cout << Heso;
		return;
	}
	cout << Heso << "x^" << Somu;
}

ostream& operator<<(ostream& os, CDonThuc& x) {
	if (x.Heso == 0 || x.Somu == 0) {
		os << x.Heso;
		return os;
	}
	os << x.Heso << "x^" << x.Somu;
	return os;
}

float CDonThuc::GetHeso() {
	return this->Heso;
}

int CDonThuc::GetSomu() {
	return this->Somu;
}

void CDonThuc::SetHeso(float hshs) {
	Heso = hshs;
}

void CDonThuc::SetSomu(int smsm) {
	Somu = smsm;
}

CDonThuc& CDonThuc::operator=(const CDonThuc& x) {
	Heso = x.Heso;
	Somu = x.Somu;
	return *this;
}

int CDonThuc::ktBangKhong(CDonThuc& x) {
	if (x.Heso == 0)
		return 1;
	return 0;
}

int CDonThuc::operator==(CDonThuc& x) {
	if (Heso == x.Heso && Somu == x.Somu)
		return 1;
	return 0;
}

int CDonThuc::operator!=(CDonThuc& x) {
	if (Heso != x.Heso || Somu != x.Somu)
		return 1;
	return 0;
}

int CDonThuc::operator>(CDonThuc& x) {
	if (Somu > x.Somu)
		return 1;
	if (Somu = x.Somu)
		if (Heso > x.Heso)
			return 1;
	return 0;
}

int CDonThuc::operator<(CDonThuc& x) {
	if (Somu < x.Somu)
		return 1;
	if (Somu = x.Somu)
		if (Heso < x.Heso)
			return 1;
	return 0;
}

int CDonThuc::operator>=(CDonThuc& x) {
	if (Somu > x.Somu)
		return 1;
	if (Somu = x.Somu)
		if (Heso >= x.Heso)
			return 1;
	return 0;
}

int CDonThuc::operator<=(CDonThuc& x) {
	if (Somu < x.Somu)
		return 1;
	if (Somu = x.Somu)
		if (Heso <= x.Heso)
			return 1;
	return 0;
}


CDonThuc CDonThuc::Tich(const CDonThuc& x) {
	CDonThuc temp;
	temp.Heso = Heso * x.Heso;
	temp.Somu = Somu + x.Somu;
	return temp;
}

CDonThuc CDonThuc::Thuong(const CDonThuc& x) {
	CDonThuc temp;
	temp.Heso = Heso / x.Heso;
	temp.Somu = Somu - x.Somu;
	return temp;
}


CDonThuc CDonThuc::operator*(CDonThuc& x) {
	CDonThuc temp;
	temp.Heso = Heso * x.Heso;
	temp.Somu = Somu + x.Somu;
	return temp;
}

CDonThuc CDonThuc::operator/(CDonThuc& x) {
	CDonThuc temp;
	temp.Heso = Heso / x.Heso;
	temp.Somu = Somu - x.Somu;
	return temp;
}


CDonThuc CDonThuc::operator*=(CDonThuc& x) {
	Heso = Heso * x.Heso;
	Somu = Somu + x.Somu;
	return *this;
}

CDonThuc CDonThuc::operator/=(CDonThuc& x) {
	Heso = Heso / x.Heso;
	Somu = Somu - x.Somu;
	return *this;
}
