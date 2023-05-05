#include <iostream>
using namespace std;

class PhanSo
{
private:
    int tu;
    int mau;

public:
    PhanSo();
    PhanSo(int, int);
    PhanSo(const PhanSo &);
    ~PhanSo();
};

int main()
{
    return 0;
}
PhanSo::PhanSo()
{
    tu = 0;
    mau = 1;
}
PhanSo::PhanSo(int tu, int mau)
{
    this->tu = tu;
    this->mau = mau;
}
PhanSo::PhanSo(const PhanSo &temp)
{
    *this = temp;
}
PhanSo::~PhanSo()
{
    return;
}
