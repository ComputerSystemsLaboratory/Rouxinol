#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int S,h,m,s,a,b,c,d;
cin>>S;
a=S/3600;
d=S%3600;
b=d/60;
c=d%60;
h=a;
m=b;
s=c;
cout<<h<<":"<<m<<":"<<s<<endl;
         return 0;
      }