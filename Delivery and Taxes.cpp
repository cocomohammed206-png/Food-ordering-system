    double deliveryFee = 0;  //Delivery

    if (orderType == 2)
     { 
        if (totalBill > 500)
        {
            deliveryFee = 0;   // free delivery
        } 
         else 
        {
            deliveryFee = 50;
        }
    }

    const double TAX_RATE = 0.14;
    double taxAmount = totalBill* TAX_RATE;
    double finalTotal = totalBill + taxAmount + deliveryFee;

    cout << fixed << setprecision(2);
    cout << "Subtotal: " << totalBill << " EGP" << endl;
    cout << "Tax (14%): " << taxAmount << " EGP" << endl;
    if (orderType == 2)
    {
        if (deliveryFee == 0) cout << "Delivery: FREE" << endl;
        else cout << "Delivery Fee: " << deliveryFee << " EGP" << endl;
    }
    cout << "--------------------------" << endl;
    cout << "Total Amount: " << finalTotal << " EGP" << endl;

    return totalBill;
