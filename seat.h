class Seat
{
    int seat_no;

public:
    explicit Seat(int seatnum):seat_no(seatnum)
    {

    }
    void DisplaySeat() const
    {
        cout<<"Your Seat is Displayed Below"<<endl;
        cout<<"Airplane Layout"<<endl;
        cout<<"     FRONT OF AIRCRAFT       "<<endl;
        int check=0;
        int count1;
        for(int i=0;i<30;i++)
        {
            count1=0;
            for(int j=0;j<6;j++)
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

