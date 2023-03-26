#include <iostream>
using namespace std;

// overloading the operator << opertator so we can output objects

class Person
{
public:
    Person(){}; // default constructor (no arguments)
    Person(string first, string last)
        : fName(first), lName(last){}; // constructor (with arguments)

    string getFirst()
    {
        return fName;
    }
    string getLast()
    {
        return lName;
    }

private:
    string fName;
    string lName;
};
// osteam is an output type, we we are writing the output type for the function we are creating

ostream &operator<<(ostream &out, Person &P)
{
    out << P.getFirst() << " " << P.getLast();
    return out;
};

int main()
{
    Person *p = new Person("John", "Doe");
    cout << *p << endl;
}