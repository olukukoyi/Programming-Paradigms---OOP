#include <iostream>
using namespace std;

// operator overloading

class Sally
{
public:
    int num;
    Sally() {}
    Sally(int a)
    {
        num = a;
    }
    Sally operator+(Sally aso)
    {
        Sally brandNew;
        brandNew.num = num + aso.num;
        return brandNew;
    }
};

int main()
{
    Sally a(34);
    Sally b(21);
    Sally c;

    a = a + a; // excutes operator overloaded function

    cout << a.num << endl;
    return 0;
}