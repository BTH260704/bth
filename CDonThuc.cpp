#include <iostream>
using namespace std;

class CDonThuc
{
private:
    float sohang;
    int mu;

public:
    CDonThuc();
    CDonThuc(float, int);
    CDonThuc(const CDonThuc &);
    friend istream &operator>>(istream, CDonThuc &);
    friend ostream &operator<<(ostream, CDonThuc);
    ~CDonThuc();
};

int main()
{
    return 0;
}
CDonThuc::CDonThuc()
{
    sohang = 0;
    mu = 0;
}
CDonThuc::CDonThuc(float sohang, int mu)
{
    this->sohang = sohang;
    this->mu = mu;
}
CDonThuc::CDonThuc(const CDonThuc &temp)
{
    *this = temp;
}
CDonThuc::~CDonThuc()
{
    return;
}