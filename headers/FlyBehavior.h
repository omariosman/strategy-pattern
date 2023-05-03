#ifndef INCLUDED_FLYBEHAVIOUR
#define INCLUDED_FLYBEHAVIOUR

#include <iostream>
using namespace std;

class FlyBehaviour
{
public:
    virtual void fly() = 0;
};

class FlyWithWings : public FlyBehaviour
{
public:
    void fly() override
    {
        std::cout << "I'm flying\n";
    }
};

class FlyNoWay : public FlyBehaviour
{
public:
    void fly() override
    {
        std::cout << "I can't fly\n";
    }
};

#endif