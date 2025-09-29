#include<Database.h>
#include <Employee.h>
#include <iostream>
#include <format>
#include <stdexcept>

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);

int main(){
    Database employeeDB;
    bool done {false};
    while (!done){
        int selection { displayMenu() };
        switch (selection){
            case 0:
                done = true;
                break;
            case 1:
                doHire(employeeDB);
                break;
            case 2:
                doFire(employeeDB);
                break;
            case 3:
                doPromote(employeeDB);
                break;
            case 4:
                employeeDB.displayAll();
                break;
            case 5:
                employeeDB.displayCurrent();
                break;
            case 6:
                employeeDB.displayFormer();
                break;
            default:
                cerr << "Unknown command" << endl;
                break;
        }
    }
}

int displayMenu(){
    int selection;
    cout << "" << endl;
    cout << "Employee Database" << endl;
    cout << "---------------------------" << endl;
    cout << "1) Hire a new employee" << endl;
    cout << "2) Fire an employee" << endl;
    cout << "3) Promote an employee" << endl;
    cout << "4) List all employees" << endl;
    cout << "5) List all current employees" << endl;
    cout << "6) List all former employees" << endl;
    cout << "0) Quit" << endl;
    cout << "" << endl;
    cout << "---->" << endl;
    cin >> selection;
    return selection;
}

void doHire(Database& db){
    string firstName, lastName;

    cout << "First Name?" << endl;
    cin >> firstName;

    cout << "Last Name?" << endl;
    cin >> lastName;

    auto& employee {db.addEmployee(firstName, lastName)};
    cout << format("Hired employee {} {} with employee number: {}", firstName, lastName, employee.getEmployeeNumber()) << endl;
}

void doFire(Database& db){
    int employeeNumber;
    cout << "Employee Number?" << endl;
    cin >> employeeNumber;

    try{
        auto& emp{db.getEmployee(employeeNumber)};
        emp.fire();
        cout << format("Employee {} terminated.", employeeNumber) << endl;
    } catch(const logic_error& exception){
        cerr << format("Unable to terminate employee: {} -> {}", employeeNumber, exception.what()) << endl;
    }
}

void doPromote(Database& db){
    int employeeNumber;
    cout << "Employee Number?" << endl;
    cin >> employeeNumber;

    int raiseAmount;
    cout << "How much of a raise?" << endl;
    cin >> raiseAmount;

    try{
        auto& emp {db.getEmployee(employeeNumber)};
        emp.promote(raiseAmount);
    }catch(const logic_error& exception){
        cerr << format("Unable to promote employee: {} -> {}", employeeNumber, exception.what()) << endl;
    }
}
