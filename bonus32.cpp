#include<iostream>
#include<iomanip>
using namespace std;
int j,k;
void out(int a[]) {
cout<<"("<<a[0];
for(int i=1;i<k;i++)
cout<<","<<a[i];
cout<<")"<<endl;
}
int main() {
cout<<"Enter j and k : ";
cin>>j>>k;
int a[k];
for(int i=0;i<k;i++)
a[i]=0;
a[0]=j;
int flag=0;
out(a);
while(!flag) {
flag=1;
for(int i=0;i<k-1;i++) {
while(a[i]-1>=a[i+1]+1) {
a[i]--;
a[i+1]++;
flag=0;
out(a);
}
}
}
return 0;
}
