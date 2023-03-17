#include <iostream>
using namespace std;

class Car
{

private:
    string model;
    int yearModel;
    int price;
    string name;

public:
    Car(string model, int yearModel, int price, string name) // constructor
    {
        this->model = model;
        this->yearModel = yearModel;
        this->price = price;
        this->name = name;
    }

    void getName() // getter
    {
        cout << name << endl;
    }

    void setName(string _name) // setter
    {
        name = _name;
    }
};

class Truck : public Car // inheritance
{

private:
    string companyName;

public:
    Truck(string model, int yearModel, int price, string name, string companyName) : Car(model, yearModel, price, name)
    {
        this->companyName = companyName;
    }

    void getCompany() // getter
    {
        cout << companyName << endl;
    }
};

int main()
{

    Car toyota("Camry", 2019, 20000, "Toyota");

    toyota.getName();
    toyota.setName("Toyota Camry");
    toyota.getName();

    Truck ford("F150", 2019, 30000, "Ford", "Bobs Bugs Be Gone!");
    ford.getName();

    return 0;
}