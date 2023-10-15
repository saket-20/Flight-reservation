#include "payment.h"
class DebitCard:public Payment
{
    long long int cardno;
    int date;
    int cvv;
    int pin;

public:
    void pay()
    {
        cout << "\nEnter card no.:";
        cin >> cardno;
        cout << "\nEnter expiry date(DDMMYY):";
        while(1)
        {
            cin >> date;
            int doj,m,d;
            doj=date;
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
        while(1)
        {
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            if(cvv>=100&&cvv<=999) break;
            else cout<<"CVV must be a 3 digit no.!!! TRY AGAIN!!";
        }
        while(1)
        {
            cout<<"\nEnter pin: ";
            cin>>pin;
            if(pin>=1000&&pin<=9999) break;
            else cout<<"CVV must be a 4 digit no.!!! TRY AGAIN!!\n";
        }

        cout << "\nTransaction Complete\n";
    }

};

