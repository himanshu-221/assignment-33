#include<iostream>
using namespace std;
class Swap
{
    private:
        int x,y;
    public:
        Swap(){}
        Swap(int a,int b):x(a),y(b)
        {
            //cout<<"Perametrized constructor called\n";
        }
        Swap swap(Swap *s)
        {
            //cout<<"swap function called\n";
            Swap *temp;
            temp->x = s->x;
            temp->y = s->y;
            cout<<temp->x<<" "<<temp->y<<endl;
        }

};
int main()
{
    Swap s1(2,3),s2(4,5);
    s2.swap(&s1);
    return 0;
}