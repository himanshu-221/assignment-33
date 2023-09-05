#include <iostream>
#include <cmath>
using namespace std;

class Proof {
protected:
    int side1;
    int side2;

public:
    Proof(int s1, int s2) : side1(s1), side2(s2) {}

    // int getSide1() const { return side1; }
    // int getSide2() const { return side2; }
};

class Compute : public Proof {
public:
    Compute(int s1, int s2) : Proof(s1, s2) {}

    bool isRightAngled() {  //because it return true of false 
        int hypotenuse = sqrt(side1 * side1 + side2 * side2);
        return (hypotenuse * hypotenuse) == (side1 * side1 + side2 * side2);
    }
};

int main() {
    int side1, side2;

    cout << "Enter the lengths of two sides: ";
    cin >> side1 >> side2;

    Compute triangle(side1, side2);

    if (triangle.isRightAngled()) { // it catches bool value from class compute
        cout << "The triangle is a right-angled triangle." <<endl;
    } else {
        cout << "The triangle is not a right-angled triangle." << endl;
    }

    return 0;
}