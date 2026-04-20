#include <iostream>
#include <string>
using namespace std;

double displayReceipt(string menuItems[], int quantities[], double prices[], int SIZE) {
    double totalBill = 0; //to display the recipt

    for (int i = 0; i < SIZE; i++) { 
        if (quantities[i] > 0) {
            double subtotal = quantities[i] * prices[i]; //da 3shan ydrb el quantity f s3r
            cout << menuItems[i] << " x" << quantities[i] << " = " << subtotal << " PHP" << endl;
            totalBill += subtotal;
        }
    }
    return totalBill; 
}
