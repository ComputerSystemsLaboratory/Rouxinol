#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int a[3];
   for(int i=0;i<3;i++){
   cin>>a[i];
}
sort(a,a+3);
for(int i=0;i<2;i++){
cout<<a[i];
cout<<" ";
}
cout<<a[2]<<endl;
}