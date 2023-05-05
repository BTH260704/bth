#include <iostream>
using namespace std;

class CDiemKhongGian
{
private:
    float x;
    float y;
    float z;

public:
    CDiemKhongGian();
    CDiemKhongGian(float, float, float);
    CDiemKhongGian(const CDiemKhongGian &);
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

    float getZ()
    {
        return this->z;
    }

    void setZ(float z)
    {
        this->z = z;
    }
    ~CDiemKhongGian();
};

int main()
{
    return 0;
}
CDiemKhongGian::CDiemKhongGian()
{
    x = y = z = 0;
}
CDiemKhongGian::CDiemKhongGian(float xx, float yy, float zz)
{
    x = xx;
    y = yy;
    z = zz;
}
CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian &temp)
{
    *this = temp;
}
CDiemKhongGian::~CDiemKhongGian()
{
    return;
}