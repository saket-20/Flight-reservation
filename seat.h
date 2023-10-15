class Seat
{
    int seat_no;

public:
    Seat(int seatnum)
    {
        seat_no=seatnum;
    }
    void DisplaySeat()
    {
        cout<<"Your Seat is Displayed Below"<<endl;
        cout<<"Airplane Layout"<<endl;
        cout<<"     FRONT OF AIRCRAFT       "<<endl;
        int i,j;
        int check=0;
        int count1;
        for(i=0;i<30;i++)
        {
            count1=0;
            for(j=0;j<6;j++)
            {
                count1++;
                check++;
                if(count1==4) cout<<" AISLE";
                if(check!=seat_no) cout<<"  "<<"*";
                else if(check==seat_no) cout<<"  "<<"X";
            }
            cout<<endl;
        }
        cout<<"    REAR OF AIRCRAFT    "<<endl;
    }
};

