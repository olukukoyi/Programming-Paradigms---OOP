#include <iostream>
// pass by refrence
// pass by pointer

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
    enemy1->attack();

    Monster m;
    Enemey *enemy2 = &m;
    enemy2->attack();

    return 0;
}