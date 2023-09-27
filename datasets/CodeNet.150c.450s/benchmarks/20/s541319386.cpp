#include<iostream>
using namespace std;
int main(){
int h,m,s;
int S;
cin>>S;
s=S%60;
m=S/60%60;
h=S/60/60%60;
cout<<h<<":"<<m<<":"<<s<<endl;
}