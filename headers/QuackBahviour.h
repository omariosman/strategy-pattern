
#include <iostream>

class QuackBahviour {
public:
    virtual void quack() = 0;
};

class Quack : public QuackBahviour {
public:
    void quack() override
    {
        std::cout << "Quack\n";
    }
};

class MuteQuack : public QuackBahviour {
public:
    void quack() override
    {
        std::cout << "<<Silence>>\n";
    }
};

