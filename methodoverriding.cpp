#include <iostream>
using namespace std;

// method overriding , redefing the methods of a base class in a derived class

class Entity
{
public:
    virtual void getName() = 0;
};

class Entity1 : public Entity
{
public:
    void getName() // overriding getName from parent class
    {
        cout << "Entity1" << endl;
    }
};

int main()
{
    return 0;
}