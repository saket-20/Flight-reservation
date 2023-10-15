#include "payment.h"
class DebitCard:public Payment
{
    long long int cardno;
    int date;
    int cvv;
    int pin;

public:
    void pay() override
    {
        cout << "\nEnter card no.:";
        cin >> cardno;
        cout << "\nEnter expiry date(DDMMYY):";
        while(true)
        {
            cin >> date;
            int doj;
            int m;
            int d;
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
        while(true)
        {
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            if(cvv>=100&&cvv<=999) break;
            else cout<<"CVV must be a 3 digit no.!!! TRY AGAIN!!";
        }
        while(true)
        {
            cout<<"\nEnter pin: ";
            cin>>pin;
            if(pin>=1000&&pin<=9999) break;
            else cout<<"CVV must be a 4 digit no.!!! TRY AGAIN!!\n";
        }

        cout << "\nTransaction Complete\n";
    }

};

