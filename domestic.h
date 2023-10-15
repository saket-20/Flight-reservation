#ifndef domestic_h
#define domestic_h
#include<iostream>
using namespace std;
#include<time.h>
#include <stdlib.h>
extern int g_domestic_pnr;
class Domestic
{
protected:
    int pnr_domestic;
    char flight_domestic[30],time_arrival[30],time_departure[30];
    long int date_of_journey;
    int choice,source,dest;
    int price;
public:
    void d_pnr()
    {
        g_domestic_pnr++;
        pnr_domestic=g_domestic_pnr;
    }
    int journey_details()
    {
        cout << "\nEnter DateOfJourney (DDMMYY)."<<  endl;
        while(1)
        {
            cin >> date_of_journey;
            long int doj;
            int m,d;
            doj=date_of_journey;
            doj=doj/10;
            doj=doj/10;
            m=doj%10;
            doj=doj/10;
            m=m+((doj%10)*10);
            doj=doj/10;
            d=doj%10;
            doj=doj/10;
            d=d+((doj%10)*10);
            doj=doj/10;
            if(m>0&&m<13&&d>0&&d<32) break;
            else cout<<"Invalid Input!!Re-enter details\n\n";
        }
        cout << "\n1.New Delhi(1) \t2.Mumbai(2) \t3.Chennai(3) \t4.Hyderabad(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> source;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        cout << "\t \t \tFlights Found" << endl << endl;
        if((source!=dest)&&(source>=1&&source<=4)&&(dest>=1&&dest<=4))
        {
        cout << "\t \t \tFlights Found" << endl << endl;
        cout << "Airline:\tDeparture:\tArrival:\n";
        cout << "1.Indigo(1)\t07:00\t\t8:30\n";
        cout << "2.Spicejet(2)\t14:00\t\t15:30\n";
        cout << "3.AirAsia(3)\t19:00\t\t20:30\n";
        }
        else if(source==dest)
        {
            cout << "\nError!!\nSame source and destination were entered.\nEnter input again\n\n"<<endl;
            return journey_details();
        }
        else
        {
            cout<<"\n\nInvalid Input\nRe-enter details\n\n"<<endl;
            return journey_details();
        }
    }

    int choose_flight_domestic()
    {   cout<<"\nEnter your choice"<<endl;
        cin>>choice;
        if(choice==1)
        {
            cout << "\nFlight selected:"<<endl;
            cout << "Indigo"<<endl;
            strcpy(flight_domestic,"Indigo");
            cout << "Departure Time : 07:00"<<endl;
            cout<<"Arrival Time: 8:30"<<endl;
            strcpy(time_departure,"7:00");
            strcpy(time_arrival,"8:30");
        }
        else if(choice==2)
        {
            cout << "\nFlight selected:"<<endl;
            cout << "Spicejet"<<endl;
            strcpy(flight_domestic,"Spicejet");
            cout << "Departure Time : 14:00"<<endl;
            cout<<"Arrival Time: 15:30"<<endl;
            strcpy(time_departure,"14:00");
            strcpy(time_arrival,"15:30");
        }
        else if(choice==3)
        {
            cout << "\nFlight selected:" << endl;
            cout << "AirAsia" << endl;
            strcpy(flight_domestic,"AirAsia");
            cout << "Departure Time : 19:00" << endl;
            cout<<"Arrival Time: 20:30" << endl;
            strcpy(time_departure,"19:00");
            strcpy(time_arrival,"20:30");
        }
        else
        {
            cout<<"\n\nInvalid Input\nRe-enter details\n\n"<<endl;
            return choose_flight_domestic();
        }
        srand(time(0));
        price=2000+(rand()%6000);
        cout<<"Price(INR):"<<price;\
        cout<<"\n***Prices may vary based on demand****\n";
    }
};
#endif // domestic_h

