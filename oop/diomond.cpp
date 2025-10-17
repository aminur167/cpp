#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void fun() { cout << "Base" << endl; }
};

// Parent classes inherit Base virtually
class Parent1 : virtual public Base
{
};
class Parent2 : virtual public Base
{
};

// Child class inherits from both Parent1 and Parent2
class Child : public Parent1, public Parent2
{
};

int main()
{
    Child obj;
    obj.fun(); // No ambiguity now
    return 0;
}
