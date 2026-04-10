#include <iostream>
#include <string>
using namespace std;

const int SIZE = 6;

void setupMenu(string items[], double prices[], int quantities[]) {
    items[0] = "Burger";
    items[1] = "Pizza";
    items[2] = "Pasta";
    items[3] = "Sandwich";
    items[4] = "Fries";
    items[5] = "Drink";

    prices[0] = 195;
    prices[1] = 120;
    prices[2] = 75;
    prices[3] = 85;
    prices[4] = 45;
    prices[5] = 25;

    for (int i = 0; i < SIZE; i++) {
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
