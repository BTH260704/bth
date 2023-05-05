#include <iostream>
using namespace std;

class CDiem
{
private:
    float x;
    float y;

public:
    CDiem();
    CDiem(float, float);
    CDiem(const CDiem &);
    float getX()
    {
        return this->x;
    }

    void setX(float x)
    {
        this->x = x;
    }

    float getY()
    {
        return this->y;
    }

    void setY(float y)
    {
        this->y = y;
    }
    ~CDiem();
};
class CTamGiac
{
private:
    CDiem a;
    CDiem b;
    CDiem c;

public:
    CTamGiac();
    CTamGiac(CDiem, CDiem, CDiem);
    CTamGiac(const CTamGiac &);
    ~CTamGiac();
};
int main()
{
    return 0;
}

CDiem::CDiem()
{
    x = y = 0;
}
CDiem::CDiem(float xx, float yy)
{
    x = xx;
    y = yy;
}
CDiem::CDiem(const CDiem &temp)
{
    x = temp.x;
    y = temp.y;
}
CDiem::~CDiem()
{
    return;
}
CTamGiac::CTamGiac()
{
}
CTamGiac::CTamGiac(CDiem a, CDiem b, CDiem c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
CTamGiac::CTamGiac(const CTamGiac &temp)
{
    *this = temp;
}
CTamGiac::~CTamGiac()
{
    return;
}