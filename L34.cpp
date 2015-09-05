#include<iostream>
using namespace std;
int main()
{
int i;
float amount=0,pamount,year,rate;
cout<<"Enter your principal amount: ";
cin>>pamount;
cout<<"Enter number of years: ";
cin>>year;
cout<<"Enter rate of interest(per year): ";
cin>>rate;
for(i=1;i<=year;i++)
{
    amount=pamount+(pamount*(rate/100));
    pamount=amount;
}
cout<<"Amount after "<<year<<" years is "<<pamount;
return 0;
}

