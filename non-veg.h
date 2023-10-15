#include<iostream>
#include"food.h"
using namespace std;
class Nonveg:public Food
{
    string food1;
public:
    void set_nv()
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
            cin>>food1;
            if(food1=="Indian"||food1=="Chinese"||food1=="Italian") break;
            else cout<<"Invalid Input!!Enter Name Of Food Type!!\n";
        }
    }
    void Display_nv() const
    {
        cout<<"\nDrink Preferences:"<<drinks;
        cout<<"\nNon Vegetarian Food Preferences:"<<food1<<endl;
    }

};
