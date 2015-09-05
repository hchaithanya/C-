#include<iostream>
using namespace std;
int main()
{
float temp,total=0.0;
char c;
cout<<"enter the tempreature\n";
cin>>temp;
cout<<"enter the conversion f/c";
cin>>c;
    if(c=='f')
    total=(temp*1.8)+32;
    else
    total=(temp-32)*(5/9);
    cout<<"tempreature is:"<<total;
return 0;
}
