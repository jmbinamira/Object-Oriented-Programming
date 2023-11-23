#include <iostream>
#include <sstream>
using namespace std;

class Rectangle {  //Area = length * width; Perimeter = 2 (length + width)
    private:
        float length, width;
    public: 
        Rectangle(float len, float wid) {
            length = len;
            width = wid;
        }

        float getArea() {
            return length * width;
        }

        float getPerimeter() {
            return 2 * (length + width);
        }
};

int main() {
    string line;
    float inputLen, inputWid;

    cout << "Enter Length & Width: ";
    getline(cin, line);
    istringstream iss(line);
    iss >> inputLen >> inputWid;

    Rectangle rectangle(inputLen, inputWid);

    cout << "Area: " << rectangle.getArea() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;

    return 0;
}