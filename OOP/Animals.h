#pragma once
#include<string>

class Animals {

public:

    virtual void voice() = 0;
    virtual void walk() = 0;
    virtual void apear() {

        walk();
        voice();
    }

};

class Cat : public Animals {

    std::string name;
public:
    Cat();
    void voice() override;
    void walk() override;
};

class Dog : public Animals {

    std::string name;
public:
    Dog();
    void voice() override;
    void walk() override;
};

class Bird : public Animals {

    std::string name;
public:
    Bird();
    void voice() override;
    void walk() override;
};

class Fox : public Animals {

    std::string name;
public:
    Fox();
    void voice() override;
    void walk() override;
};



