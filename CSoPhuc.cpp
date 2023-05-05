#include <iostream>
using namespace std;

class CSoPhuc
{
private:
    float thuc;
    float ao;

public:
    CSoPhuc();
    CSoPhuc(float, float);
    CSoPhuc(const CSoPhuc &);
    ~CSoPhuc();
};

int main()
{
    return 0;
}
CSoPhuc::CSoPhuc()
{
    thuc = ao = 0;
}
CSoPhuc::CSoPhuc(float thuc, float ao)
{
    this->thuc = thuc;
    this->ao = ao;
}
CSoPhuc::CSoPhuc(const CSoPhuc &temp)
{
    *this = temp;
}
CSoPhuc::~CSoPhuc()
{
    return;
}
