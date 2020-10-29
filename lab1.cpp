#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    }
    void print() { cout << "x = " << x << '\n' << "y = " << y << endl; }

private:
    double x;
    double y;
};

int main()
{
    Wektor2D v1(10, 20);
    v1.print();
    // v1.norm();
}