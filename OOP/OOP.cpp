
#include <vector>
#include "Animals.h"
#include "Animals_metods.h"

using namespace std;


int main()
{
    
    int n = enter();                        //enter number of animals

    vector<Animals *> animal_pool(n);       //make empty vektor for animals

    get_rand_animals(animal_pool, n);       //fullfill pool with random animals

    animal_ap(animal_pool, n);              //animals do what they should

    delpool(animal_pool, n);                //delete pool from memory 


    return 0;
}
