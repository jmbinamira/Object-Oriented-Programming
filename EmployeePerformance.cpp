#include <iostream>
#include <sstream>
using namespace std;

class Employee {
    private:
        string name;
        int employeeID;
        double salary;

    public:
        Employee(string n, int empID, double s) {  //Constructor
            name = n;
            employeeID = empID;
            salary = s;
        }

        void updateSalary(double empRating) {  //Method to update salary based on perf.
            if (empRating >= 3.00 && empRating <= 5.00) {
                salary *= empRating;
            }
            else {
                cout << "Employee rating too low. Salary not updated." << endl;
            }
        }

        void setSalary(double s) {
            salary = s;
        }

        string getName() {
            return name;
        }

        int getEmpID() {
            return employeeID;
        }

        double getSalary() {
            return salary;
        }

};

int main() {
    string line, n;
    int empID,state;
    double s, empRating, newSalary;

    cout << "Employee name: ";
    getline(cin, n);
    cout << "Employee I.D.: ";
    getline(cin, line);
    empID = stoi(line);
    cout << "Employee salary: ";
    getline(cin, line);
    s = stod(line);

    Employee employee(n, empID, s);

    while(true) {
        cout << " \n" << employee.getName() << " - " << employee.getEmpID() << " - " << employee.getSalary() << endl;
        cout << "[1] Rate Perf./Update Salary     [2] Update Salary (Not Perf. Based)     [3] Exit" << endl;
        getline(cin, line);
        state = stoi(line);

        if (state == 1) {
            cout << " \nPerformance rating of " << employee.getName() << " (0.00 - 5.00): ";
            getline(cin, line);
            empRating = stod(line);
            employee.updateSalary(empRating);

            cout << "Updated Salary is: " << employee.getSalary() << endl;
        }

        if (state == 2) {
            cout << "New Salary: ";
            getline(cin, line);
            newSalary = stod(line);
            employee.setSalary(newSalary);
        }
        
        if (state == 3) {
            break;
        }
    }

    return 0;
}