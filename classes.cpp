#include <iostream>
using namespace std;

// classes are templates/definition of an object
// classes provides the data structure and methods for an object
// --
// classes are used to create objects at run tine

//--
// objects refer to real world entities

class Entity
{
    // some real world entity information
public:
    Entity() {} // construtos are used to initialize objects

    // destructors are used to clear up space in an object
};

int main()
{

    Entity e = Entity(); // creates an object of the class Entity

    return 0;
}