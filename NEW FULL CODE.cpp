#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

//MALAK
const int MEALS_SIZE = 4;
const int DRINKS_SIZE = 3;
const int DESSERTS_SIZE = 3;
const int CAT_SIZE = 3;
const int SIZE = MEALS_SIZE + DRINKS_SIZE + DESSERTS_SIZE;

void DisplayMenu
     (string arr1[], string arr2[], string arr3[],
     double prices1[], double prices2[], double prices3[],
     int size1, int size2, int size3);

double displayReceipt(string menuItems[], int quantities[], double prices[], int SIZE, int orderType ) ;


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

//NOUR
cout << "Welcome to our restaurant!!"<<endl<<"Crafted with love, served with flavor."<<endl<<endl;

int pick ;
while (true)
{
     DisplayMenu(mealItems, drinkItems, dessertItems,
                mealPrices, drinkPrices, dessertPrices,
                MEALS_SIZE, DRINKS_SIZE, DESSERTS_SIZE );

     cout<<"Take your pick happiness is waiting"<<endl;
     cout<<"Please enter the item number (1-10) to add it to your order: ";
     cin>>pick ;
       if (pick == 11)
         {
           break;
         }
       else if (pick >= 1 && pick <= 4)
        {
              int qty;
              cout << "How many " << mealItems[pick - 1] << "? ";
              cin >> qty;
              cout<<endl;
              while (qty <= 0)
                {
                  cout << "Invalid quantity! Please enter a number greater than 0: ";
                   cin >> qty;
                }
                  if (qty > 0)
                    {
                      quantities[pick - 1] += qty;
                    }
        }
        else if (pick >= 5 && pick <= 7)
        {
              int qty;
              cout << "How many " << drinkItems[pick - 5] << "? ";
              cin >> qty;
              while (qty <= 0)
                {
                cout << "Invalid quantity! Please enter a number greater than 0: ";
                cin >> qty;
                cout<<endl;

                }
                  if (qty > 0)
                    {
                      quantities[pick - 1] += qty;
                    }
        }
        else if (pick >= 8 && pick <= 10)
        {
              int qty;
            cout << "How many " << dessertItems[pick - 8] << "? ";
            cin >> qty;
            cout<<endl;

              while (qty <= 0)
                {
                cout << "Invalid quantity! Please enter a number greater than 0: ";
                cin >> qty;
                cout<<endl;

                }
                  if (qty > 0)
                    {
                      quantities[pick - 1] += qty;
                    }
        }
         else
            {
            cout << "Wrong choice ,please choose from menu!" << endl;
            }
            cout <<"<==   Do you want another thing ?  ==>"<<endl;

}
//MARIAM
int orderType;
cout << "\nHow would you like to receive your order?" << endl;
cout << "1. Pick up from restaurant" << endl;
cout << "2. Home Delivery" << endl;
cout << "Enter choice: ";
cin >> orderType;

if (pick == SIZE + 1)
    {system("cls");}
  cout<< "Your order is ready - here are the details "<<endl;
  cout << "------------------------------------" << endl;
 double finalResult = displayReceipt(menuItems, quantities, prices, SIZE,orderType );
    cout << "Thank you-can't wait to see you again!! " << endl;
    return 0;
}

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
