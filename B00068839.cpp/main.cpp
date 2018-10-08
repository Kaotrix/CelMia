#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
// pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

    void setrecWidth(int recw)
    {
        recwidth = recw;
    }
    void setrecHeight(int rech)
    {
        recheight = rech;
    }

    void setcirRadius(int rad)
    {
        cirradius = rad;
    }

protected:
    int width;
    int height;
    int recwidth;
    int recheight;
    int cirradius;
};

class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (recwidth * recheight);
    }
};

class Circle: public Shape
{
public:
    int getArea()
    {
        return (cirradius*(2*3.14));
    }
};
int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
    Rectangle Rec;
    Rec.setrecHeight(4);
    Rec.setrecWidth(7);
    Circle Cir;
    Cir.setcirRadius(5);

// Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea()  << endl;
    cout << "Total Rectangle area: " << Rec.getArea() << endl;
    cout << "Total Circle area: " << Cir.getArea()    << endl;
    cout << "Total shape area: " << Tri.getArea() + Rec.getArea() + Cir.getArea() << endl;

    return 0;
}
