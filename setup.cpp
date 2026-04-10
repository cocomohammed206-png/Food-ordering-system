#include <iostream>
#include <string>
using namespace std;

const int SIZE = 7; 

void setupMenu(string items[], double prices[], int quantities[]) {
    items[1] = "Burger";
    items[2] = "Pizza";
    items[3] = "Pasta";
    items[4] = "Sandwich";
    items[5] = "Fries";
    items[6] = "Drink";

    prices[1] = 195;
    prices[2] = 120;
    prices[3] = 75;
    prices[4] = 85;
    prices[5] = 45;
    prices[6] = 25;

    for (int i = 1; i < SIZE; i++) {
        quantities[i] = 0;
    }
}

int main() {
    string menuItems[SIZE];
    double prices[SIZE];
    int quantities[SIZE];

    setupMenu(menuItems, prices, quantities);

    return 0;
}
