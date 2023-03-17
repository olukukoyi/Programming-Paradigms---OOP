#include <iostream>
using namespace std;

// encapsulation gives up abstraction and control

class Entity
{
private: // encapsulated / closed off the data in private
    string name;
    string powers{};
    float powerLevel;
    int health;
    int checkHealth()
    {
        return health;
    }
};

int main()
{
    Entity *e = new Entity();
    // the code below will not work because the data is encapsulated (inaccessible from outside the class)
    // e->name; // error: 'name' is a private member of 'Entity'
    // e->checkHealth(); // error: 'checkHealth' is a private member of 'Entity'
    return 0;
}