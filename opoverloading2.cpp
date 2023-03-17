#include <iostream>
using namespace std;

// another example of operator overloading

class Person
{
public:
    string fName;
    string lName;
    int age;
    int salary;
    Person(string _fName, string _lName, int _age, int _salary)
    {
        fName = _fName;
        lName = _lName;
        age = _age;
        salary = _salary;
    }
    Person(){};

    Person operator+(Person newPerson)
    {
        Person MarriedCouple;
        MarriedCouple.salary = salary + newPerson.salary; // currSalary = currSalary + passedInSalary
        MarriedCouple.lName = newPerson.lName;
        return MarriedCouple;
    }
};

int main()
{

    Person wife("Jane", "Doe", 25, 50000);
    Person husband("John", "Dasher", 30, 60000);
    wife = wife + husband;

    cout << wife.salary << endl;
    cout << wife.lName << endl;
    return 0;
}