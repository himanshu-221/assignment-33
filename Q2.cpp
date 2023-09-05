#include<iostream>
using namespace std;
class Shape
{
    protected:
        double len,bred;
    public:
        virtual void set_data(double x, double y)=0;
        virtual void Display_area()=0;
};
class Triangle : public Shape
{
    double area;
    public:
        void set_data(double a,double b=0)
        {
            len = a;
            bred = b;
        }
        void Display_area()
        {
            area = len*bred*1/2 ;
            cout<<"Area of Triangle is = "<<area<<endl;
        }
};
class Rectangle : public Shape
{
    double area;
    public:
        void set_data(double a,double b=0)
        {
            len = a;
            bred = b;
        }
        void Display_area()
        {
            area = (len*bred);
            cout<<"Area of Rectangle is = "<<area<<endl;
        }
};
class Circle :public Shape
{
    double area;
    public:
        void set_data(double a,double b=0)
        {
            len=a;
            bred=b;
        }
        void Display_area()
        {
            area = 3.14 * len*len;
            cout<<"Area of Rectangle is = "<<area<<endl;
        }
};
int main()
{
    Shape *s1;
    Rectangle r1;
    Triangle t1;
    Circle c1;
    // r1.set_data();
    // r1.Display_area();
    // t1.set_data();
    // t1.Display_area();
    c1.set_data(12);
    c1.Display_area();
    return 0;
}