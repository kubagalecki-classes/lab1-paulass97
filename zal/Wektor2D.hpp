class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    double x=3,y=4;


public:
    Wektor2D(){
        x=0;
        y=0;
    }
    Wektor2D(double wspolX, double wspolY){
        x=wspolX;
        y=wspolY;
        std::cout<<"konstruktor z 2 parametrami";
        std::cout<<"\nx="<<x<<", y="<<y<<"\n";
    }
    ~Wektor2D(){
        std::cout<<"destruktor";
        std::cout<<"\nx="<<x<<", y="<<y<<"\n";
    }
    void setX(double wspolX){
        x=wspolX;
    }
    void setY(double wspolY){
        y=wspolY;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }

};

Wektor2D operator+(Wektor2D v1, Wektor2D v2){
    return Wektor2D(v1.getX()+v2.getX(),v1.getY()+v2.getY());
}

double operator*(Wektor2D v1, Wektor2D v2){
    return v1.getX()*v1.getY()+v2.getX()*v2.getY();
}
