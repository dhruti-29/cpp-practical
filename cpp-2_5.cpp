#include<iostream>
#include<cmath>
using namespace std;

class bank
{
    int id;
    string name;
    int amount;
    float rate;
    int time;
     float emi;

public:


    bank(){

     id = 0;
    name = "dhruti";
     amount = 0;
     rate =0;
    time =0;
    }
    bank(int i)
    {
        cout<<"PLEASE ENTER YOUR DETAILS "<<endl;


        cout<<"ENTER NAME : "<<endl;
        cin>>name;

        cout<<"ENTER AMOUNT : "<<endl;
        cin>>amount;

        cout<<"ENTER RATE : "<<endl;
        cin>>rate;

        cout<<"ENTER TIME : "<<endl;
        cin>>time;
    }

    int emical()
    {
        float R = rate / (12 * 100);
         emi = (amount * R * pow(1 + R,time)) /
                    (pow(1 + R, time) - 1);

return emi;

    }


    void dispaly(){
    cout<<"*************DETAILS**************"<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"AMOUNT : "<<amount<<endl;
    cout<<"RATE : "<<rate<<endl;
    cout<<"TIME : "<<time<<endl;
    cout<<"EMI : " <<emi<<endl;


    }
};


int main()
{
    bank l1(3);
    l1.emical();
l1.dispaly();
    return 0;
}