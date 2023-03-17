#include <iostream>
using namespace std;

// abstract classes , interfaces , pure virtual functions

class Entity // abstract class
{
public:
    virtual string getName() = 0; // pure virtual function (interface)
};

class Entity2 : public Entity
{
public:
    string getName() { return "Entity2"; }
};

int main()
{
    // Entity *e1 = new Entity(); // error: cannot instantiate abstract class
    Entity2 *e = new Entity2();
    return 0;
}