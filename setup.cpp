#include <iostream>
#include <string>
using namespace std;

const int SIZE = 6;

int main() {
    string menuItems[SIZE];
    double prices[SIZE];
    int quantities[SIZE];

    menuItems[0] = "Burger";
    menuItems[1] = "Pizza";
    menuItems[2] = "Pasta";
    menuItems[3] = "Sandwich";
    menuItems[4] = "Fries";
    menuItems[5] = "Drink";

    prices[0] = 195;
    prices[1] = 120;
    prices[2] = 75;
    prices[3] = 85;
    prices[4] = 45;
    prices[5] = 25;

    for (int i = 0; i < SIZE; i++) {
        quantities[i] = 0;
    }

    return 0;
}
