#pragma once
#include"Animals.h"
#include<vector>

//animals do what they should
void animal_ap(std::vector<Animals*>& arr, int n);

//delete pool from memory
void delpool(std::vector<Animals*>& arr, int n);

//fullfill pool with random animals
void get_rand_animals(std::vector<Animals*>& arr, int size);

//enter number of animals
int enter();		