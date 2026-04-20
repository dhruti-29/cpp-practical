#include<iostream>
using namespace std;

class calculator
{
public:

int add(int a, int b)
{
    return a + b;
}

float add(float a, float b)
{
    return a + b;
}

float add(int a, float b)
{
    return a + b;
}

float add(float a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

float sub(float a, float b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float mul(float a, float b)
{
    return a * b;
}

float divi(float a, float b)
{
    if(b==0)
    {
        cout<<"error"<<endl;
        return 0;
    }
    return a / b;
}

int add(int arr[], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

};

int main()
{
    calculator c;

    int a = c.add(5,3);
    float b = c.add(2.5,3.5);
    float c1 = c.add(5,2.5);

    int d = c.sub(10,4);
    int e = c.mul(3,4);
    float f = c.divi(10,2);

    int arr[5] = {1,2,3,4,5};
    int g = c.add(arr,5);

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c1<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    cout<<f<<endl;
    cout<<g<<endl;

    return 0;
}