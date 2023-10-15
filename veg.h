#include<iostream>
using namespace std;
#include<string.h>
#include"food.h"
class Veg:public Food
{
    char food2[30];
public:
    void set_v()
    {
        while(1)
        {
            cout<<"\nEnter drink preference: "<<endl;
            cout<<"1.Pepsi \t2.Coke \t\t3.Fanta"<<endl;
            cin>>drinks;
            if((strcmp(drinks,"Pepsi")==0)||(strcmp(drinks,"Coke")==0)||(strcmp(drinks,"Fanta")==0)) break;
            else cout<<"Invalid Input!!Enter Name Of Drink!!\n";
        }
        while(1)
        {
            cout<<"\nEnter food preference"<<endl;
            cout<<"1.Indian \t2.Chinese \t3.Italian"<<endl;
            cin>>food2;
            if((strcmp(food2,"Indian")==0)||(strcmp(food2,"Chinese")==0)||(strcmp(food2,"Italian")==0)) break;
            else cout<<"Invalid Input!!Enter Name Of Food Type!!\n";
        }
    }
    void Display_v()
    {
        cout<<"\nDrink Preferences:"<<drinks;
        cout<<"\nVegetarian Food Preferences:"<<food2<<endl;
    }
};

