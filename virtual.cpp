#include <iostream>
using namespace std;

// a use case of using virtual functions
// virtual functions is when we're able to override a method from the base class

class Vehicle
{
public:
    Vehicle(string model)
    {
        this->model = model;
    };

    virtual void displayModel() // virutal tells us this function can be overriden in subclasses
    {
        cout << model << endl;
    };

private:
    string model;
};

class Car : public Vehicle
{
public:
    Car(string model) : Vehicle(model){};

    // method overiding
    void displayModel() override // override is optional , its just a specificer to improve readability
    {
        cout << "overided car model" << endl;
    };
};

int main()
{
    Vehicle *v = new Vehicle("vehicleModel");
    v->displayModel();
    Car *c = new Car("carModel");
    c->displayModel();
}