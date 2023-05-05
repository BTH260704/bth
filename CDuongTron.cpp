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
class CDuongTron
{
private:
    CDiem tam;
    float bankinh;

public:
    CDuongTron();
    CDuongTron(CDiem, float);
    CDuongTron(const CDuongTron &);
    ~CDuongTron();
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
CDuongTron::CDuongTron()
{
    tam.setX(0);
    tam.setY(0);
    bankinh = 0;
}
CDuongTron::CDuongTron(CDiem tam, float bankinh)
{
    this->tam = tam;
    this->bankinh = bankinh;
}
CDuongTron::CDuongTron(const CDuongTron &temp)
{
    *this = temp;
}
CDuongTron::~CDuongTron()
{
    return;
}