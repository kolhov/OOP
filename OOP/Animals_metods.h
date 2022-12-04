#pragma once
#include"Animals.h"
#include<vector>

void animal_ap(std::vector<Animals*>& arr, int n);

void delpool(std::vector<Animals*>& arr, int n);

void get_rand_animals(std::vector<Animals*>& arr, int size);

int enter();