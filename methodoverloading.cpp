#include <iostream>
using namespace std;

// method overloading
// when the methods have the same name but different functionality based off of the inputs data type

int addOne(int a)
{
    return a + 1;
}

float addOne(float b)
{
    return b + 1.0;
}
int main()
{
    int a = 54;
    float b = 3333.3;
    cout << addOne(a) << endl;
    cout << addOne(b) << endl;
    return 0;
}