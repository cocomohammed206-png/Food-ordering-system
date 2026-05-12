#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//malak
const int MEALS_SIZE = 4;
const int DRINKS_SIZE = 3;
const int DESSERTS_SIZE = 3;
const int SIZE = MEALS_SIZE + DRINKS_SIZE + DESSERTS_SIZE;


void DisplayMenu
     (string arr1[], string arr2[], string arr3[],
     double prices1[], double prices2[], double prices3[],
     int size1, int size2, int size3);
double displayReceipt(string menuItems[], int quantities[], double prices[], int SIZE);

int main()
{
    //malak
    string mealItems[MEALS_SIZE]        = {"Burger", "Pizza", "Pasta", "Sandwich"};
    double mealPrices[MEALS_SIZE]       = {195, 120, 75, 85};

    string drinkItems[DRINKS_SIZE]      = {"Soda", "Water", "Juice"};
    double drinkPrices[DRINKS_SIZE]     = {45, 25, 35};

    string dessertItems[DESSERTS_SIZE]  = {"Cheesecake", "Ice Cream", "Brownie"};
    double dessertPrices[DESSERTS_SIZE] = {85, 50, 65};

    string menuItems[SIZE];
    double prices[SIZE];
    int quantities[SIZE] = {};

    int idx = 0;
    for (int i = 0; i < MEALS_SIZE;    i++) { menuItems[idx] = mealItems[i];    prices[idx++] = mealPrices[i]; }
    for (int i = 0; i < DRINKS_SIZE;   i++) { menuItems[idx] = drinkItems[i];   prices[idx++] = drinkPrices[i]; }
    for (int i = 0; i < DESSERTS_SIZE; i++) { menuItems[idx] = dessertItems[i]; prices[idx++] = dessertPrices[i]; }
