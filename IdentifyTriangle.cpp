#include <iostream>
#include <sstream>
using namespace std;

class Triangle {
    private:
        double lengthA, lengthB, lengthC;

    public:
        Triangle(double lenA, double lenB, double lenC) {  //Constructor
            lengthA = lenA;
            lengthB = lenB;
            lengthC = lenC;
        }

        void determineTriangle() {
            if (lengthA == lengthB && lengthB == lengthC) {
                cout << "Equilateral Triangle (All Sides Equal)";
            }
            else if (lengthA == lengthB || lengthB == lengthC || lengthA == lengthC ) {
                cout << "Isoceles Triangle (2 Sides Equal)";
            }
            else {
                cout << "Scalene Triangle (No Equal Sides)";
            }
        }
};

int main() {
    string line;
    double lenA, lenB, lenC;

    cout << "Length of the 3 sides of your triangle:\n";
    getline(cin, line);
    istringstream iss(line);
    iss >> lenA >> lenB >> lenC;

    Triangle t1(lenA, lenB, lenC);
    t1.determineTriangle();

    return 0;
}