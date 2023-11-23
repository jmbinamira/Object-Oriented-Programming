#include <iostream>
#include <sstream>
using namespace std;

class Car {
    private:
        string company, model;
        int year;
    public:
        Car(string co, string mo, int ye) {  //Constructor
            company = co;
            model = mo;
            year = ye;
        }
        void setCompany(string co) {
            company = co;
        }
        void setModel(string mo) {
            model = mo;
        }
        void setYear(int ye) {
            year = ye;
        }
        string getCompany() {
            return company;
        }
        string getModel() {
            return model;
        }
        int getYear() {
            return year;
        }
};

int main() {
    string line, inputCo, inputMo;

    Car c1("Honda", "Civic", 2019);
    cout << "Previous Company: " << c1.getCompany() << endl;
    cout << "Previous Model: " << c1.getModel() << endl; 
    cout << "Previous Year: " << c1.getYear() << endl;

    cout << "Car Company: ";
    getline(cin, inputCo);
    cout << "Car Model: ";
    getline(cin, inputMo);
    cout << "Year: ";
    getline(cin, line);
    int inputYe = stoi(line);
    
    c1.setCompany(inputCo);
    c1.setModel(inputMo);
    c1.setYear(inputYe);

    cout << "Updated Company: " << c1.getCompany() << endl;
    cout << "Updated Model: " << c1.getModel() << endl; 
    cout << "Updated Year: " << c1.getYear() << endl;

    return 0;
}