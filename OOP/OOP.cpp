
#include <vector>
#include "Animals.h"
#include "Animals_metods.h"

using namespace std;


int main()
{
    
    int n = enter();

    vector<Animals *> animal_pool(n);

    get_rand_animals(animal_pool, n);

    animal_ap(animal_pool, n);

    delpool(animal_pool, n);


    return 0;
}
