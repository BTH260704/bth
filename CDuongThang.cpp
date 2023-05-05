#include <iostream>
using namespace std;

class CDuongThang
{
private:
    float he_so_goc;
    float he_so_tu_do;

public:
    CDuongThang();
    CDuongThang(float, float);
    CDuongThang(const CDuongThang &);
    ~CDuongThang();
};

int main()
{
    return 0;
}
CDuongThang::CDuongThang()
{
    he_so_goc = 0;
    he_so_tu_do = 0;
}
CDuongThang::CDuongThang(float a, float b)
{
    he_so_goc = a;
    he_so_tu_do = b;
}
CDuongThang::CDuongThang(const CDuongThang &temp)
{
    *this = temp;
}
CDuongThang::~CDuongThang()
{
    return;
}