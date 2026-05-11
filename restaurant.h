#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

const int MEALS_SIZE = 4;
const int DRINKS_SIZE = 3;
const int DESSERTS_SIZE = 3;
const int SIZE = MEALS_SIZE + DRINKS_SIZE + DESSERTS_SIZE;

void DisplayMenu(string arr1[], string arr2[], string arr3[],
                 double prices1[], double prices2[], double prices3[],
                 int size1, int size2, int size3);

double displayReceipt(string menuItems[], int quantities[], double prices[], int SIZE, int orderType);


#endif
