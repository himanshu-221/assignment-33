#include<iostream>
using namespace std;
class matrix
{
    protected:
        int a,b,c,d;
    public:
        void set_data()
        {
            cout<<"Enter Four elements of 2x2 matrix\n";
            cin>>a>>b>>c>>d;
            cout<<"Your entered matrix is:-\n";
            cout<<a<<" "<<b<<"\n"<<c<<" "<<d<<endl;
        }
};
class Calculate_determinant : public matrix
{
    private:
        int determinant;
    public:
        void calculate()
        {
            determinant = (a*d) - (b*c);
            cout<<"Determinant of this matrix is = "<<determinant<<endl;
        }
};
int main()
{
    Calculate_determinant m1;
    m1.set_data();
    m1.calculate();
    return 0;
}