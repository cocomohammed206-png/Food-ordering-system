#include "restaurant.h"

//MOAZ
void DisplayMenu
     (string arr1[], string arr2[], string arr3[],
     double prices1[], double prices2[], double prices3[],
     int size1, int size2, int size3)
     {

        cout<<"------------MEALS------------"<<endl;

        cout<<"No."<<"\t"<<"Item"<<"\t\t"<<"Price"<<endl<<endl;

        for(int i=0; i<size1; i++) {

            cout<<i+1<<"\t"<<left<<setw(15)<<arr1[i]<<prices1[i]<<"EGP"<<endl;
        }
        cout<<"------------DRINKS------------"<<endl;
        cout<<"No."<<"\t"<<"Item"<<"\t\t"<<"Price"<<endl<<endl;
        for(int i=0; i<size2; i++) {

            cout<<i+5<<"\t"<<left<<setw(15)<<arr2[i]<<prices2[i]<<"EGP"<<endl;
        }
        cout<<"-----------DESSERTS-----------"<<endl;
        cout<<"No."<<"\t"<<"Item"<<"\t\t"<<"Price"<<endl<<endl;
        for(int i=0; i<size3; i++) {

            cout<<i+8<<"\t"<<left<<setw(15)<<arr3[i]<<prices3[i]<<"EGP"<<endl;
        }
        cout<<"------------------------------"<<endl<<"11"<<"\t"<<left <<setw(15)<<"Finish your order"<<endl
        <<"------------------------------"<<endl<<endl;

}

//HAMZA
double displayReceipt(string menuItems[], int quantities[], double prices[], int SIZE, int orderType ) {
    double totalBill = 0; //to display the recipt

    for (int i = 0; i < SIZE; i++)
    {
        if (quantities[i] > 0)
        {
            double subtotal = quantities[i] * prices[i]; //da 3shan ydrb el quantity f s3r
            cout << menuItems[i] << " x" << quantities[i] << " = " << subtotal << " EGP" << endl;
            totalBill += subtotal;
        }
    }

    //MOHAMED
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
}
