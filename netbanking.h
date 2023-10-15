#include "payment.h"
class Netbanking:public Payment
{
    string user_id;
    string password;
    long long int account_number;
    int bank;
public:
    void pay() override
    {
        while(true)
        {
            cout << "Banks Available: 1.HDFC(1) 2.SBI(2) 3.ICICI(3) 4.Central Bank(4) 5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            if(bank>=1&&bank<=5) break;
            else cout<<"INVALID INPUT\n";
        }
        cout << "\nYou have selected:" << bank;
        cout << "\nEnter user id:";
        cin >> user_id;
        cout << "\nEnter password:";
        cin >> password;
        cout<<"\nEnter account number:";
        cin>>account_number;

        cout << "\nTransaction Complete\n";
    }
};
