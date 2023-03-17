#include <iostream>

// PLEASE READ
// polymorphism allows us to run the same method on different objects(sub classes) while the mehtod is running differently in every object
// --
// the method originates from a base class
// and the sub classes has the same method, but different functionality
//--
// in other words.. same method name, but different functionality ....
//  hence why understand virtual functions are important in polymorphism

using namespace std;

class Enemey
{
public:
    virtual void attack()
    {
    }
};

class Ninja : public Enemey
{
public:
    void attack()
    {
        cout << "Ninja attack!" << endl;
    }
};
class Monster : public Enemey
{
public:
    void attack()
    {
        cout << "Monster attack!" << endl;
    }
};

int main()
{

    Ninja n;
    Enemey *enemy1 = &n;
    // this work because Ninja is a sub class of Enemey (a specific version of enemy) so we can point to it
    enemy1->attack();

    Monster m;
    Enemey *enemy2 = &m;
    // this work because Monster is a sub class of Enemey (a specific version of enemy) so we can point to it
    enemy2->attack();

    return 0;
}