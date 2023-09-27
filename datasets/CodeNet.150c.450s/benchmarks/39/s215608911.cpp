#include<iostream>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a<1||a>100)
cin>>a;
if(b<1||b>100)
cin>>b;
cout<<a*b<<" "<<a*2+b*2<<endl;
return 0;}

