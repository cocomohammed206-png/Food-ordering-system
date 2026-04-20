int pick ;
cout << "Crafted with love, served with flavor."<<endl ;
while (true)
{
     DisplayMenu(menuItems,prices,SIZE);
     cout<<"Take your pick happiness is waiting"<<endl;
     cin>>pick ;
       if (pick == SIZE + 1)
         {
           break;
         }
        if (pick >= 1 && pick <= SIZE)
        {
              int qty;
              cout << "How many " << menuItems[pick - 1] << "? ";
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
            cout << "Wrong choice ,pleas choose from menu!" << endl;
            }
        cout <<"do you want another thing ?"<<endl;

}
