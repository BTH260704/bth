#include <iostream>
using namespace std;

class CHonSo
{
private:
    int nguyen;
    int tu;
    int mau;

public:
    CHonSo();
    CHonSo(int, int, int);
    CHonSo(const CHonSo &);
    ~CHonSo();
};

int main()
{
    return 0;
}
CHonSo::CHonSo()
{
    nguyen = 0;
    tu = 0;
    mau = 1;
}
CHonSo::CHonSo(int a, int b, int c)
{
    nguyen = a;
    tu = b;
    mau = c;
}
CHonSo::CHonSo(const CHonSo &temp)
{
    *this = temp;
}
CHonSo::~CHonSo()
{
    return;
}