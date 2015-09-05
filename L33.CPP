#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a[10],n,c=1,j,i,num=0;
cout<<"enter the number of digits";
cin>>n;
cout<<"enter the digits\n";
for(i=0;i<n;i++)
   {
    cin>>a[i];
    }
for(i=n;i>=0;i--)
    {
    c=pow(10,i-1);
    num+=a[n-i]*c;
    }
    cout<<"the num is\t"<<num;
    return 0;
}
