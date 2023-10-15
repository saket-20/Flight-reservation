#include<iostream>
#include<string.h>
#include"food.h"
using namespace std;
class Veg:public Food
{
    string food2;
public:
    void set_v()
    {
        while(true)
        {
            cout<<"\nEnter drink preference: "<<endl;
            cout<<"1.Pepsi \t2.Coke \t\t3.Fanta"<<endl;
            cin>>drinks;
            if(drinks=="Pepsi"||drinks=="Coke"||drinks=="Fanta") break;
            else cout<<"Invalid Input!!Enter Name Of Drink!!\n";
        }
        while(true)
        {
            cout<<"\nEnter food preference"<<endl;
            cout<<"1.Indian \t2.Chinese \t3.Italian"<<endl;
            cin>>food2;
            if(food2=="Indian"||food2=="Chinese"||food2=="Italian") break;
            else cout<<"Invalid Input!!Enter Name Of Food Type!!\n";
        }
    }
    void Display_v() const
    {
        cout<<"\nDrink Preferences:"<<drinks;
        cout<<"\nVegetarian Food Preferences:"<<food2<<endl;
    }
};

