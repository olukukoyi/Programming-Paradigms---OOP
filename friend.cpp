#include <iostream>

using namespace std;

// friend allows us to call class methods outside the class while having access to the classes variables

class Entity
{
public:
    Entity()
    {
        entityVal = 0; // initializes value to 0;
    }

private:
    int entityVal;
    friend void changeEntityVal(Entity &entityObj); // prototype for friend function
};

void changeEntityVal(Entity &entityObj) // uses reference to change the value of the entity
// must be outside of class and must pass the object as a reference
{
    entityObj.entityVal = 555;
    cout << " Entity value changed to: " << entityObj.entityVal << endl; // notice how we have access to values outside of class
}

int main()
{
    Entity e;
    changeEntityVal(e);
}