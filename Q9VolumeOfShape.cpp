#include<iostream>
using namespace std;
class Shape
{
    protected:
        double s1;
    public:
        void set_data()
        {
            cout<<"Enter Dimantion of the shape\n";
            cin>>s1;
        }
        virtual void Display_Volume()=0;
};
class Square : public Shape
{
    double volume;
    public:
        void Display_Volume()
        {
            volume = s1*s1*s1;
            cout<<"Volume of square is = "<<volume<<endl;
        }
};
class Sphare : public Shape
{
    double volume;
    public:
        void Display_Volume()
        {
            volume = 3.14*(s1*s1*s1)*(4/3);
            cout<<"Volume of Sphare is = "<<volume<<endl;
        }
};
int main()
{
    Shape *s1;
    Square a;
    s1 = &a;
    
    // r1.set_data();
    // r1.Display_area();
    s1->set_data();
    s1->Display_Volume();
    free(s1);
    Sphare r;

    s1 = &r;
    s1->set_data();
    s1->Display_Volume();
    return 0;
}