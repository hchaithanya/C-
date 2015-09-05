#include<iostream>
using namespace std;
int main()
{
int a[10][20],n,i,j,c=1;
cout<<"enter the number n\n";
cin>>n;
for( i=0;i<10;i++)
{
    for( j=0;j<10;j++,c++)
         {
         a[i][j]=n*c;
         }
}
for(i=0;i<10;i++)
{
for(j=0;j<20;j++)
{
cout<<a[i][j]<<"\t";
}
}
return 0;
}







