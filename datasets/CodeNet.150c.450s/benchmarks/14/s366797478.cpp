#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i=1;
do{
int x=i;
if(x%3==0)cout<<" "<<i;
else {
while(x){if(x%10==3){cout<<" "<<i;break;}x/=10;}
}}while(++i<=n);
cout<<endl;
}