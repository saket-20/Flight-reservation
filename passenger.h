#include"domestic.h"
#include"international.h"
#include<time.h>
#include"seat.h"
#include"non-veg.h"
#include"veg.h"
#include"card.h"//
#include"netbanking.h"//

class Passenger: public Domestic,public International
{
protected:
    int gender1,age;
    long int phone_number;
    Seat *seat;
    Nonveg *nonveg;
    Veg *veg;
    DebitCard *debitcard;
    Netbanking *netbanking;
    char firstname[30],surname[30],email[30];
    char gender2[30];
public:
    void j_detail(int x)
    {
        if(x==1)
        {   journey_details();
            choose_flight_domestic();
        }
        else
        {   international_journey_details();
            choose_internationalflight();
        }
    }
    void passenger_details()
    {
        int flag=0;
        while(1)
        {
            flag=0;
            cout << "\n\n\nEnter passenger details";
            cout << "\nFirst Name:";
            cin >> firstname;
            for(int i=0;i<strlen(firstname);i++)
            {
                if(firstname[i]>='0'&&firstname[i]<='9') flag=1;
            }
            if(flag==0) break;
            else cout<<"Name Cannot Contain integers!!TRY AGAIN!!\n";
        }
        flag=0;
        while(1)
        {
            flag=0;
            cout << "Surname:";
            cin >> surname;
            for(int i=0;i<strlen(surname);i++)
            {
                if(surname[i]>='0'&&surname[i]<='9') flag=1;
            }
            if(flag==0) break;
            else cout<<"Name Cannot Contain Integers!!TRY AGAIN!!\n";
        }
    }
    int gender_check()
    {
        cout << "\nGender:\nMale-press 1::\nFemale-press 2::\n";
        cin >> gender1;
        if(gender1==1) strcpy(gender2,"Male");
        else if(gender1==2) strcpy(gender2,"Female");
        else
        {
            cout<<"\n\nINVALID GENDER\n\n";
            return gender_check();
        }
    }
    void more_details()
    {
        cout << "Age:";
        while(1)
        {
            cin >> age;
            if(age>0) break;
            else cout<<"INVALID AGE!!\n\n";
        }
        while(1)
        {
            cout << "Email Id(GMAIL):";
            cin >> email;
            int l=strlen(email);
            if(strcmp((&email[l-10]),"@gmail.com")==0) break;
            else cout<<"INVALID EMAIL ENTERED!!\n\n";
        }
        cout << "Phone Number:";
        while(1)
        {
            cin >> phone_number;
            int s=0,i;
            long int pn;
            pn=phone_number;
            while(pn>0)
            {
                pn=pn/10;
                s++;
            }
            cout<<"s: "<<s<<"\n";
            if(s==10) break;
            else cout<<"INVALID PHONE NUMBER!!\n\n";
        }

        cout<<"\n\nDetails Entered:\n";
        cout<<"Name:"<<firstname<<" "<<surname<<endl;
        cout<<"Gender:"<<gender2<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Email id:"<<email<<endl;
        cout<<"Contact No.:"<<phone_number<<endl;
    }
    int getpnrd()
    {
        return pnr_domestic;
    }
    int getpnri()
    {
        return pnr_international;
    }
    void allot_seat(Seat*s)
    {
        seat=s;
    }
    void add_nfood(Nonveg *n)
    {
        nonveg=n;
    }
    void add_vfood(Veg *v)
    {
        veg=v;
    }
    void paywith_card(DebitCard *d)
    {
        debitcard=d;
    }
    void pay_netbanking(Netbanking*nb)
    {
        netbanking=nb;
    }
    void display_domestic()
    {
        cout<<"PNR:" << pnr_domestic << endl;
        cout<<"Flight:" <<flight_domestic<< endl;
        cout<<"Name:"<<firstname<<" "<<surname<<endl;
        cout<<"Date of Journey:"<<date_of_journey<<endl;
        cout<<"Time of Departure:"<<time_departure<<endl;
        cout<<"Time of Arrival:"<<time_arrival;
    }
    void display_international()
    {
        cout<<"PNR:"<<pnr_international<<endl;
        cout<<"Flight:"<<flight_international<<endl;
        cout<<"Name:"<<firstname<<" "<< surname<<endl;
        cout<<"Date of Journey:"<<date_of_journey_international<<endl;
        cout<<"Time of Departure:"<<time_departure_international<<endl;
        cout<<"Time of Arrival:"<<time_arrival_international<<endl;
    }
};
