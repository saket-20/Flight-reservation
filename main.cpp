#include <iostream>
#include <fstream>
#include <string.h>
#include "passenger.h"
#include <time.h>
#include <windows.h>
#include <fstream>
using namespace std;

int g_domestic_pnr=12345;
int g_international_pnr=123456;
int main()
{
    Passenger p1;
    DebitCard d1;
    Nonveg nv1;
    Veg v1;
    Netbanking n1;
    int ch,ch1,n,f=0;
    char continue1;
    int food1;
    ofstream fout;
    do
    {
        system("CLS");
        cout <<"\t   ###############################################\n";
        cout <<"\t   ----------------------------------------------\n";
        cout <<"\t   **********************************************\n";
        cout << "\n\t\t  Air Ticket Reservation System"<<endl<<endl;
        cout <<"\t   **********************************************\n";
        cout <<"\t   ----------------------------------------------\n";
        cout <<"\t   ###############################################\n";

        cout << "\n\n\t\t\t 1.Book Flight(1) \n" << endl;
        cout << "\t\t\t 2.Retrieve Booking(2) \n" << endl;
        cout << "\t\t\t 3.Exit(3) \n" << endl;
        cout << "\n\t\tEnter your choice: ";
        cin >> ch;
        int pay_check;
        if(ch==1)
        {
            system("CLS");
            cout << "\n\n 1.Domestic Fights(1) \n 2.International Flights(2)" << endl;
            cout << "\nPlease enter your option: " << endl;
            cin >> ch1;

            if(ch1==1)//to book a domestic ticket
            {
                p1.d_pnr();
                p1.j_detail(1);
                p1.passenger_details();
                p1.gender_check();
                p1.more_details();
                while(1)
                {
                    cout<<"\nEnter food preference:\n";
                    cout<<"1.Veg Food(1)\n2.Non-Veg Food(2)\n";
                    cin.clear();
                    cin>>food1;
                    if(food1==1||food1==2) break;
                    else cout<<"Enter Valid Input!!\n";
                }
                if(food1==1)
                {
                    v1.set_v();
                    p1.add_vfood(&v1);
                }
                else if(food1==2)
                {
                    nv1.set_nv();
                    p1.add_nfood(&nv1);
                }
                cout<<"\nPayment Methods:\n";
                cout<<"1.Debit Card(1)\n2.NetBanking(2)\n";
                cin>>pay_check;
                if(pay_check==1)
                {
                    d1.pay();
                    p1.paywith_card(&d1);
                }
                else if(pay_check==2)
                {
                    n1.pay();
                    p1.pay_netbanking(&n1);
                }
                system("CLS");
                srand(time(nullptr));
                Seat s1((rand()%150)+1);
                Seat * ps1=&s1;
                p1.allot_seat(ps1);
                cout<<"\nYour Seat is Allotted Randomly\n";
                ps1->DisplaySeat();
                cout<<"Ticket is Displayed Below"<<endl;
                p1.display_domestic();
                if(food1==1) v1.Display_v();
                else if(food1==2) nv1.Display_nv();
                fout.open("ticketd.txt",ios::out);
                fout.write((char*)&p1,sizeof(p1));
                fout.close();
            }
            else if(ch1==2)// to book an international ticket
            {
                p1.j_detail(2);
                p1.passenger_details();
                p1.i_pnr();
                p1.gender_check();
                p1.more_details();
                while(true)
                {
                cout<<"\nEnter food preference:\n";
                cout<<"1.Veg Food(1)\n2.Non-Veg Food(2)\n";
                cin>>food1;
                if(food1==1||food1==2) break;
                else cout<<"Enter Valid Input!!\n";
                }
                if(food1==1)
                {
                    v1.set_v();
                    p1.add_vfood(&v1);
                }
                else if(food1==2)
                {
                    nv1.set_nv();
                    p1.add_nfood(&nv1);
                }
                cout<<"\nPayment Methods:\n";
                cout<<"1.Debit Card(1)\n2.NetBanking(2)\n";
                cin>>pay_check;
                if(pay_check==1)
                {
                    d1.pay();
                    p1.paywith_card(&d1);
                }
                else if(pay_check==2)
                {
                    n1.pay();
                    p1.pay_netbanking(&n1);
                }
                system("CLS");
                srand(time(nullptr));
                Seat s1((rand()%150)+1);
                Seat * ps1=&s1;
                p1.allot_seat(ps1);
                cout<<"\nYour Seat is Allotted Randomly\n";
                ps1->DisplaySeat();
                cout<<"Ticket is Displayed Below"<<endl;
                p1.display_international();
                if(food1==1) v1.Display_v();
                else if(food1==2) nv1.Display_nv();
                fout.open("ticketi.txt",ios::out);
                fout.write((char*)&p1,sizeof(p1));
                fout.close();
            }
        }
        else if(ch==2)
        {
            int pnr,c;
            Passenger p2;
            cout<<"1.Domestic \t2.International\n";
            cin>>c;
            if(c==1)
            {
                cout<<"Enter pnr number: ";
                cin>>pnr;
                ifstream fin;
                fin.open("ticketd.txt",ios::in);
                fin.read((char*)&p2,sizeof(p2));
                while (!fin.eof())
                {
                    if (p2.getpnrd()==pnr)
                    {
                        p2.display_domestic();
                        f=1;
                        break;
                    }
                    fin.read((char*)&p2, sizeof(p2));
                }
                if(f==0)
                {
                    cout<<"Ticket details not found\n";
                }
                fin.close();
            }
            else if(c==2)
            {
                f=0;
                cout<<"Enter pnr number: ";
                cin>>pnr;
                ifstream fin;
                fin.open("ticketi.txt",ios::in);
                fin.read((char*)&p2,sizeof(p2));
                while (!fin.eof())
                {
                    if (p2.getpnri()==pnr)
                    {
                        p2.display_international();
                        f=1;
                        break;
                    }
                    fin.read((char*)&p2, sizeof(p2));
                }
                if(f==0)
                {
                    cout<<"Ticket details not found\n";
                }
                fin.close();
            }
        }
        else if(ch==3)
        {
            break;
        }

        cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
        cin>>continue1;
    }while(continue1=='Y'||continue1=='y');
}
