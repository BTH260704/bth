#include <iostream>
#include <cmath>
using namespace std;

class CDiemKhongGian
{
private:
    float x;
    float y;
    float z;

public:
    // Nhóm phương thức khởi tạo
    void KhoiTao();
    void KhoiTao(float, float, float);
    void KhoiTao(const CDiemKhongGian &);
    CDiemKhongGian();
    CDiemKhongGian(float, float, float);
    CDiemKhongGian(const CDiemKhongGian &);
    void Nhap();
    friend istream &operator>>(istream &, CDiemKhongGian &);
    // Nhóm phương thức cung cấp thông tin
    void Xuat();
    friend ostream &operator<<(ostream &, CDiemKhongGian &);
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
    // Nhóm phương thức cập nhật thông tin
    CDiemKhongGian &operator=(const CDiemKhongGian &);
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
    // Nhóm phương thức kiểm tra
    int ktTrungGoc();
    int ktTrung(const CDiemKhongGian &);
    int ktKhongTrung(const CDiemKhongGian &);
    int ktThuocHoanh();
    int ktThuocTung();
    int ktThuocCao();
    int ktThuocOxy();
    int ktThuocOxz();
    int ktThuocOyz();
    // Nhóm phương thức xử lý
    int operator==(const CDiemKhongGian &);
    int operator!=(const CDiemKhongGian &);
    int operator>(const CDiemKhongGian &);
    int operator>=(const CDiemKhongGian &);
    int operator<(const CDiemKhongGian &);
    int operator<=(const CDiemKhongGian &);
    float KhoangCachGoc();
    float KhoangCach(const CDiemKhongGian &);
    float KhoangCachX(const CDiemKhongGian &);
    float KhoangCachY(const CDiemKhongGian &);
    float KhoangCachZ(const CDiemKhongGian &);
    CDiemKhongGian DoiXungGoc();
    CDiemKhongGian DoiXungHoanh();
    CDiemKhongGian DoiXungTung();
    CDiemKhongGian DoiXungCao();
    CDiemKhongGian DoiXungOxy();
    CDiemKhongGian DoiXungOxz();
    CDiemKhongGian DoiXungOyz();
    ~CDiemKhongGian();
};

int main()
{
    return 0;
}
// Nhóm phương thức khởi tạo
void CDiemKhongGian::KhoiTao()
{
    x = y = z = 0;
}
void CDiemKhongGian::KhoiTao(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}
void CDiemKhongGian::KhoiTao(const CDiemKhongGian &temp)
{
    *this = temp;
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
void CDiemKhongGian::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> x;
    cout << "Nhap tung do: ";
    cin >> y;
    cout << "Nhap cao do: ";
    cin >> z;
}
istream &operator>>(istream &is, CDiemKhongGian &temp)
{
    cout << "Nhap hoanh do: ";
    is >> temp.x;
    cout << "Nhap tung do: ";
    is >> temp.y;
    cout << "Nhap cao do: ";
    is >> temp.z;
    return is;
}
CDiemKhongGian::~CDiemKhongGian()
{
    return;
}
// Cac phuong thuc cap nhat thong tin
CDiemKhongGian &CDiemKhongGian::operator=(const CDiemKhongGian &temp)
{
    *this = temp;
    return *this;
}

// Nhóm phương thức cung cấp thông tin
void CDiemKhongGian::Xuat()
{
    cout << "(" << this->x << "," << this->y << "," << this->z << ")";
}
ostream &operator<<(ostream &os, CDiemKhongGian &temp)
{
    os << "(" << temp.x << "," << temp.y << "," << temp.z << ")";
    return os;
}
// Nhóm phương thức kiểm tra
int CDiemKhongGian::ktTrungGoc()
{
    if (x == 0 && y == 0 && z == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktTrung(const CDiemKhongGian &temp)
{
    if (this->x == temp.x && this->y == temp.y && this->z == temp.z)
        return 1;
    return 0;
}
int CDiemKhongGian::ktKhongTrung(const CDiemKhongGian &temp)
{
    if (this->x == temp.x && this->y == temp.y && this->z == temp.z)
        return 0;
    return 1;
}
int CDiemKhongGian::ktThuocHoanh()
{
    if (this->y == 0 && this->z == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuocTung()
{
    if (this->x == 0 && this->z == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuocCao()
{
    if (this->x == 0 && this->y == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuocOxy()
{
    if (this->z == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuocOxz()
{
    if (this->y == 0)
        return 1;
    return 0;
}
int CDiemKhongGian::ktThuocOyz()
{
    if (this->x == 0)
        return 1;
    return 0;
}
// Nhóm phương thức xử lý
int CDiemKhongGian::operator==(const CDiemKhongGian &temp)
{
    if (this->x == temp.x && this->y == temp.y && this->z == temp.z)
        return 1;
    return 0;
}
int CDiemKhongGian::operator!=(const CDiemKhongGian &temp)
{
    if (this->x == temp.x && this->y == temp.y && this->z == temp.z)
        return 0;
    return 1;
}
int CDiemKhongGian::operator>(const CDiemKhongGian &temp)
{
    if (this->z > temp.z)
        return 1;
    else if (this->z < temp.z)
        return 0;
    else if (this->y > temp.y)
        return 1;
    else if (this->y < temp.y)
        return 0;
    else if (this->x > temp.x)
        return 1;
    else
        return 0;
}

int CDiemKhongGian::operator>=(const CDiemKhongGian &temp)
{
    if (this->z > temp.z)
        return 1;
    else if (this->z < temp.z)
        return 0;
    else if (this->y > temp.y)
        return 1;
    else if (this->y < temp.y)
        return 0;
    else if (this->x >= temp.x)
        return 1;
    else
        return 0;
}

int CDiemKhongGian::operator<(const CDiemKhongGian &temp)
{
    if (this->z < temp.z)
        return 1;
    else if (this->z > temp.z)
        return 0;
    else if (this->y < temp.y)
        return 1;
    else if (this->y > temp.y)
        return 0;
    else if (this->x < temp.x)
        return 1;
    else
        return 0;
}

int CDiemKhongGian::operator<=(const CDiemKhongGian &temp)
{
    if (this->z < temp.z)
        return 1;
    else if (this->z > temp.z)
        return 0;
    else if (this->y < temp.y)
        return 1;
    else if (this->y > temp.y)
        return 0;
    else if (this->x <= temp.x)
        return 1;
    else
        return 0;
}

float CDiemKhongGian::KhoangCachGoc()
{
    return sqrt(x * x + y * y + z * z);
}

float CDiemKhongGian::KhoangCach(const CDiemKhongGian &temp)
{
    float dx = temp.x - x;
    float dy = temp.y - y;
    float dz = temp.z - z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}

float CDiemKhongGian::KhoangCachX(const CDiemKhongGian &temp)
{
    return fabs(temp.x - x);
}

float CDiemKhongGian::KhoangCachY(const CDiemKhongGian &temp)
{
    return fabs(temp.y - y);
}

float CDiemKhongGian::KhoangCachZ(const CDiemKhongGian &temp)
{
    return fabs(temp.z - z);
}

CDiemKhongGian CDiemKhongGian::DoiXungGoc()
{
    return CDiemKhongGian(-x, -y, -z);
}

CDiemKhongGian CDiemKhongGian::DoiXungHoanh()
{
    return CDiemKhongGian(-x, y, z);
}

CDiemKhongGian CDiemKhongGian::DoiXungTung()
{
    return CDiemKhongGian(x, -y, z);
}

CDiemKhongGian CDiemKhongGian::DoiXungCao()
{
    return CDiemKhongGian(x, y, -z);
}

CDiemKhongGian CDiemKhongGian::DoiXungOxy()
{
    return CDiemKhongGian(x, y, -z);
}

CDiemKhongGian CDiemKhongGian::DoiXungOxz()
{
    return CDiemKhongGian(x, -y, z);
}

CDiemKhongGian CDiemKhongGian::DoiXungOyz()
{
    return CDiemKhongGian(-x, y, z);
}
