#ifndef international_h
#define international_h
#include<iostream>
#include<time.h>
using namespace std;
extern int g_international_pnr;
class International
{
protected:

    long int date_of_journey_international;
    int source_international;
    int dest_international;
    int choice_international;
    int price_international;
    string flight_international;
    string time_arrival_international;
    string time_departure_international;
    int pnr_international;
public:
    void i_pnr()
    {
        g_international_pnr++;
        pnr_international=g_international_pnr;
    }

    int international_journey_details()
    {
        cout << "Enter DateOfJourney(DDMMYY)." << endl;
        while(true)
        {
            cin >> date_of_journey_international;
            long int doj;
            int m;
            int d;
            doj=date_of_journey_international;
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
        cout << "1.London(1) 2.Wuhan(2) 3.Melbourne(3) 4.Singapore(4) 5.San Francisco(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> source_international;
        cout << "\tEnter Destination" << endl;
        cin >> dest_international;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((source_international!=dest_international)&&(source_international>=1&&source_international<=5)&&(dest_international>=1&&dest_international<=5))
        {
            cout << "Airline:\tDeparture:\tArrival:\n";
            cout << "1.Air India(1)\t6:00\t\t10:30\n";
            cout << "2.Etihad(2)\t10:00\t\t14:30\n";
            cout << "3.Emirates(3)\t18:00\t\t22:05\n";
        }

        else if(source_international==dest_international)
        {
            cout<<"Both source and destination are same!!\nEnter details again\n\n\n"<<endl;
            return international_journey_details();
        }
        else
        {
            cout <<"\n\nInvalid Input\nRe-enter details\n\n"<<endl;
            return international_journey_details();
        }

    }

    int choose_internationalflight()
    {
        cout << "\nEnter your choice" << endl;
        cin >> choice_international;
        if(choice_international==1)
        {
            cout << "\nFlight selected:" <<endl;
            cout << "Air India" << endl;
            flight_international="Air India";
            cout << "Departure Time: 6:00" << endl;
            cout << "Arrival Time: 10:30" << endl;
            time_departure_international="6:00";
            time_arrival_international,"10:30";
        }
        else if(choice_international==2)
        {
               cout << "\nFlight selected:" << endl;
               cout << "Ethihad" << endl;
               flight_international="Ethihad";
               cout << "Departure Time: 10:00" << endl;
               cout << "Arrival Time: 14:30" << endl;
               time_departure_international="10:00";
            time_arrival_international="14:30";
        }
        else if(choice_international==3)
        {
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            flight_international="Emirates";
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            time_departure_international="18:00";
            time_arrival_international="22:05";
        }
        else
        {
            cout<<"\n\nInvalid Input\nRe-enter details\n\n"<<endl;
            return choose_internationalflight();
        }
        srand(time(nullptr));
        price_international=50000+(rand()%30000);
        cout<<"Price(INR):"<<price_international;
        cout<<"\n***Prices may vary based on demand****\n";
    }
};
#endif

