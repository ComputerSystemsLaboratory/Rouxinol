#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
int a[3];
cin>>a[0]>>a[1]>>a[2];
for(int i=0;i<3;i++)
for(int j=i;j<3;j++)
if(a[i]>a[j])
swap(a[i],a[j]);
for(int i=0;i<3;i++)
{
cout<<a[i];
if(i==2)
cout<<endl;
else
cout<<" ";
}
}
