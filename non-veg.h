#include<iostream>
using namespace std;
#include"food.h"
class Nonveg:public Food
{
    char food1[30];
public:
    void set_nv()
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
            cin>>food1;
            if((strcmp(food1,"Indian")==0)||(strcmp(food1,"Chinese")==0)||(strcmp(food1,"Italian")==0)) break;
            else cout<<"Invalid Input!!Enter Name Of Food Type!!\n";
        }
    }
    void Display_nv()
    {
        cout<<"\nDrink Preferences:"<<drinks;
        cout<<"\nNon Vegetarian Food Preferences:"<<food1<<endl;
    }

};
