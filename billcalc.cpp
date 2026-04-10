#include <iostream>
#include <string>
using namespace std;
    // Hamzaa//
    double totalBill = 0; 
    
    for (int i = 1; i < SIZE; i++) {
        if (quantities[i] > 0) {
            // y7sb el sandwich bl 3dd
            double subtotal = quantities[i] * prices[i];
            
            // yl3 hesab el sandwich lwhdu
            cout << menuItems[i] << " x" << quantities[i] << " = " << subtotal << " PHP" << endl;
            
            // yhsb total bill
            totalBill += subtotal;
        }
    }
 
