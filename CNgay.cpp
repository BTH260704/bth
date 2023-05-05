#include <iostream>
using namespace std;
class CNgay
{
private:
    int ngay;
    int thang;
    int nam;

public:
    CNgay();
    CNgay(int, int, int);
    CNgay(const CNgay &);
    ~CNgay();
};
int main()
{
    return 0;
}
CNgay::CNgay()
{
    ngay = thang = nam = 1;
}
CNgay::CNgay(int ngay, int thang, int nam)
{
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}
CNgay::CNgay(const CNgay &temp)
{
    *this = temp;
}
CNgay::~CNgay()
{
    return;
}