#include <iostream>
#include <vector>
using namespace std;

struct Wektor2D
{
    vector< vector< double > > wektor{{x, y}};
    void                       print() { cout << "x = " << x << '\n' << "y = " << y << endl; }
    void                       norm() { cout << "norma wektora = " << norma << endl; }

    double x;
    double y;
    double norma = abs(x) + abs(y);
};

int main()
{
    Wektor2D v1;
    v1.x = 10;
    v1.y = 20;
    v1.print();
    v1.norm();
}