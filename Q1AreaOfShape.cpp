#include<iostream>
using namespace std;
class Shape
{
    protected:
        double len,bred;
    public:
        virtual void set_data()=0;
        virtual void Display_area()=0;
};
class Triangle : public Shape
{
    double area;
    public:
        void set_data()
        {
            cout<<"Enter Dimensions of the Triangle(hieght and base)\n";
            cin>>len>>bred;
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
        void set_data()
        {
            cout<<"\nEnter Dimensions of the Rectangle(lenght and bredth)\n";
            cin>>len>>bred;
        }
        void Display_area()
        {
            area = (len*bred);
            cout<<"Area of Rectangle is = "<<area<<endl;
        }
};
int main()
{
    Shape *s1;
    Rectangle r1;
    Triangle t1;
    // r1.set_data();
    // r1.Display_area();
    t1.set_data();
    t1.Display_area();
    return 0;
}