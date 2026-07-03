#include <iostream>
#include <string>
using namespace std;

int main(){
    int overtime, absent, bonus;
    double calc;
    string EmployeeName;

    cout << "Enter employee's name: ";
    getline(cin, EmployeeName);
    cout << "Enter overtime hours: ";
    cin >> overtime;
    cout << "Enter absent hours: ";
    cin >> absent;
   

    calc = overtime - (2.0/3) * absent;
    cout << "Calculated value: " << calc << endl;
    
    if (calc > 40) {
        bonus = 50;
    } else if (calc > 30) {
        bonus = 40;
    } else if (calc > 20) {
        bonus = 30;
    } else if (calc > 10) {
        bonus = 20;
    } else if (calc > 0) {
        bonus = 10;
    } else {
        bonus = 0;
        cout << "No bonus for you. Get back to work." << endl;
    }

    if (bonus > 0) {
        cout << "Employee's Bonus: " << bonus << endl;
    }
    return 0;
}