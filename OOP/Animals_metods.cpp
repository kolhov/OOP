
#include <cstdlib>
#include <vector>
#include <iostream>
#include "Animals.h"

using namespace std;

int enter() {
    int n;
    cout << "Enter number of animals: ";
    cin >> n;
    return n;
}
void animal_ap(vector<Animals*>& arr, int n) {                  //animals do what they should 
    for (int i = 0; i < n; i++) {

        arr[i]->apear();
    }
}

void delpool(vector<Animals*>& arr, int n) {                    //delete all allocated classes from memory

    for (int k = 0; k < n; k++) {

        delete arr[k];
    }
}

void get_rand_animals(vector<Animals*>& arr, int size) {        //fullfill pool with random animals

    for (int s = 0; s < size; s++) {


        int n = rand() % 4;
        switch (n)
        {
        case 0:
            arr[s] = new Cat();
            break;
        case 1:
            arr[s] = new Dog();
            break;
        case 2:
            arr[s] = new Bird();
            break;
        case 3:
            arr[s] = new Fox();
            break;
        default:
            break;
        }
    }
}