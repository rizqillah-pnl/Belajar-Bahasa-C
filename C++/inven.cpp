#include <iostream>
using namespace std;

int main(){

    //Initializing
    char choice;
    int i, j, record=0, totalrecord;
    int id[record];
    string name[record];
    double price[record];
    bool back=true;
    string none;


    //Menu
    while(back=true){   
        cout<<"*******************************"<<endl;
        cout<<"[A] Add Record"<<endl;
        cout<<"[V] View Record"<<endl;
        cout<<"[E] Edit Record"<<endl;
        cout<<"[D] Delete Record"<<endl;
        cout<<"[L] View All Record"<<endl;
        cout<<"Enter your choice and press return: "<<endl;

        cin >> choice;

        switch (choice){

            //Add Record
            case 'a':
            case 'A':
            record++;
            cout<<"Input ID: ";
            cin>>id[record];
            cout<<"Input Name: ";
            cin>>name[record];
            cout<<"Input Price: ";
            cin>>price[record];
            break;

            //View Record
            case 'v':
            case 'V':
            cout<<"Enter ID you wish to view: ";
            cin>>id[record];
            cout<<"ID       Name        Price"<<endl;
            cout<<id[record]<<"         "<<name[record]<<"      "<<price[record]<<endl;
            break;

            //Edit Record
            case 'e':
            case 'E':
            cout << "Enter ID you wish to edit: ";
            cin>>id[record];
            cout<<"Input NEW name: ";
            cin>>name[record];
            cout<<"Input NEW price: ";
            cin>>price[record];
            break;

            //Delete Record
            case 'd':
            case 'D':
            cout << "Enter ID you wish to delete";
            cin>>id[record];
            id[record]=0;
            name[record]=none;
            price[record]=0;
            break;

            //View All Records
            case 'l':
            case 'L':
            cout<<"ID       Name        Price"<<endl;
            for(i=1; i<totalrecord+1; i++){
                cout<<id[i]<<"      "<<name[i]<<"       "<<price[i]<<endl;
            }
            break;

            //Exit Program if invalid input
            default:
            back=false;
            break;
        }
    }
    return 0;
}
    
