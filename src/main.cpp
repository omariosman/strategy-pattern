#include <iostream>
#include "Duck.h"

int main()
{
    MallardDuck md;
    md.performFly();
    md.performQuack();
    md.setFlyBehaviour(new FlyNoWay());
    md.setQuackBehaviour(new MuteQuack());
    md.performFly();
    md.performQuack();
}