#include<iostream>
using namespace std;
class Shape
{
    protected:
        double len,bred;
    public:
        void set_data(double x, double y=0)  
        {
            len = x;
            bred = y;
        }
        virtual void Display_area()=0;
};
class Square : public Shape
{
    double area;
    public:
        void Display_area()
        {
            area = len*len ;
            cout<<"Area of Square is = "<<area<<endl;
        }
};
class Parallelogram : public Shape
{
    double area;
    public:
        
        void Display_area()
        {
            area = (len*bred);
            cout<<"Area of Parallelogram is = "<<area<<endl;
        }
};
int main()
{
    Square s1;
    Parallelogram p1;
    // r1.set_data();
    // r1.Display_area();
    s1.set_data(5);
    s1.Display_area();
    return 0;
}