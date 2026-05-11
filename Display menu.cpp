//Moaz
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
