//Nour
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
       else if (pick >= 1 && pick <= 3)
        {
              int qty;
              cout << "How many " << mealItems[pick - 1] << "? ";
              cin >> qty;
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
        else if (pick >= 4 && pick <= 7)
        {
              int qty;
              cout << "How many " << drinkItems[pick - 5] << "? ";
              cin >> qty;
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
        else if (pick >= 8 && pick <= 10)
        {
              int qty;
              cout << "How many " << dessertItems[pick - 8] << "? ";
              cin >> qty;
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
         else 
            {
            cout << "Wrong choice ,please choose from menu!" << endl;
            }
            cout <<"do you want another thing ?"<<endl;

}
int orderType;
cout << "\nHow would you like to receive your order?" << endl;
cout << "1. Pick up from restaurant" << endl;
cout << "2. Home Delivery" << endl;
cout << "Enter choice: ";
cin >> orderType;
