#include <iostream>
using namespace std;

// pointers(*) stores the memory address of a variable
// & refrences the memory address of a varibale
// --
// * stores it, & refrences it

class Entity
{
public:
    void sayHello()
    {
        cout << "Hello World!" << endl;
    }
};

int main()
{
    int var = 33;
    int *ptr = &var; // points to var
    *ptr = 555;      // denotes val and changes it to 555
    cout << *ptr << endl;

    // --

    Entity *e = new Entity(); // allocates new memory and points to the memory address of the new entity
    e->sayHello();

    return 0;
}