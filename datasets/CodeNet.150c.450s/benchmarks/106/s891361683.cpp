#include<iostream>
using namespace std;
int main(){
int a,b,c;
int d=0;
cin>>a>>b>>c;
if(a<=b){
for(int i=a;i<=b;i++)
{
if(c%i==0)
d++;
}
}
else{return 0;}
cout<<d<<endl;
return 0;
}