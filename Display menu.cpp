void DisplayMenu(string items[],double prices[],int size) {

        cout<<"No."<<"\t"<<"Item"<<"\t\t"<<"Price"<<endl<<endl;

        for(int i=0; i<size; i++) {

            cout<<i<<"\t"<<left<<setw(15)<<items[i]<<prices[i]<<"EGP"<<endl;

        }

    }
