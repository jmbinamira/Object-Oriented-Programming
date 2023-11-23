#include <iostream>
using namespace std;

class Person {
    private:
        string name, country;
        int age;
    public:
        void setName(string n) {  //Setter
            name = n;
        }      
        void setAge(int a) {
            age = a;
        }
        void setCountry(string c) {
            country = c;
        }
        string getName() {  //Getter
            return name;
        }
        int getAge() {
            return age;
        }
        string getCountry() {
            return country;
        }
};

int main() {
    string line, inputName, inputCountry;
    int inputAge;

    cout << "Name: ";
    getline(cin, inputName);
    cout << "Age: ";
    getline(cin, line);
    inputAge = stoi(line);
    cout << "Country: ";
    getline(cin, inputCountry);

    Person p1;
    p1.setName(inputName);
    p1.setAge(inputAge);
    p1.setCountry(inputCountry);
    cout << p1.getName() << " is " << p1.getAge() << " and is from " << p1.getCountry();
    
    return 0;
}