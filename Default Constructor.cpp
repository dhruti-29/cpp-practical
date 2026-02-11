#include <iostream>
using namespace std;

class student{
int id;
string name;

public:

student(){

    cout<<"ENTER NAME : "<<endl;
    cin>>name;

    cout<<"ENTER ID NUMBER : "<<endl;
    cin>>id;

}

void setdata(){

cout<<"**********DETAILS***********"<<endl;

cout<<"NAME : "<<name<<endl;

cout<<"id : "<<id<<endl;


}

};

int main() {

student s1,s2,s3;

s1.setdata();
s2.setdata();
s3.setdata();

    return 0;
}
