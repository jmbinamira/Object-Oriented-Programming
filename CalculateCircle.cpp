#include <iostream>
#include <cmath>
using namespace std;

class Circle {  
    private:
        float pi = 3.14, radius;
    
    public:
        Circle(float rad) {  //Constructor
            radius = rad; 
        }

        float getArea() { 
            return pi * pow(radius, 2); 
        }

        float getCircumference() { 
            return 2 * pi * radius;
        }  
};

int main() {     
    string line;
    cout << "Radius: ";
    getline(cin, line);
    float radiusInput = stof(line);  //String to double

    Circle circle(radiusInput);

    float area = circle.getArea();
    cout << "Area: " << area << endl;
    float circumference = circle.getCircumference();
    cout << "Circumference: " << circumference << endl;

    return 0;
}