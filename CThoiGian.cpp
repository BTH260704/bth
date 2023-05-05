#include <iostream>
using namespace std;

class CThoiGian
{
private:
    int gio;
    int phut;
    int giay;

public:
    CThoiGian();
    CThoiGian(int, int, int);
    CThoiGian(const CThoiGian &);
    ~CThoiGian();
};

int main()
{
    return 0;
}
CThoiGian::CThoiGian()
{
    gio = phut = giay = 0;
}
CThoiGian::CThoiGian(int gio, int phut, int giay)
{
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}
CThoiGian::CThoiGian(const CThoiGian &temp)
{
    *this = temp;
}
CThoiGian::~CThoiGian()
{
    return;
}