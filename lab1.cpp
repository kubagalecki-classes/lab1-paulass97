#include <iostream>
#include <math.h>

using namespace std;

class Wektor2D
{
public:
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
        cout << "x: " << x << "\ny:" << y << endl;
    }

    ~Wektor2D() { cout << "destruktor x:" << x << "\n y:" << y << endl; }

private:
    double x;
    double y;
};

int main()
{
    Wektor2D v1(20, 10);
    Wektor2D v2(2.3, 2);
    Wektor2D v3(1, 5);
}