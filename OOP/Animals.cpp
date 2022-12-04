
#include <iostream>
#include "Animals.h"

using namespace std;


Cat::Cat() : name("Cat") {}
    void Cat::voice() {
        cout << name << " goes meow" << endl;
    }
    void Cat:: walk() {
        cout << name << " walks in. ";
    }


Dog::Dog() : name("Dog") {}
    void Dog::voice() {
        cout << name << " goes woof" << endl;
    }
    void Dog::walk() {
        cout << name << " runs in. ";
    }


    Bird::Bird() : name("Bird") {}
    void Bird::voice() {
        cout << name << " goes tweet" << endl;
    }
    void Bird::walk() {
        cout << name << " flys in. ";
    }


Fox::Fox() : name("Fox") {}
    void Fox::voice() {
        cout << name << " goes Wa-pa-pa-pa-pa-pa-pow!" << endl;
    }
    void Fox::walk() {
        cout << name << " jumps in. ";
    }

