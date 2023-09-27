#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main(){

string st1,st2;
int n;
cin>>n;
for(int iii=0;iii<n;iii++){
cin>>st1>>st2;
int d=1,a=0,s1=0,s2=0;
int S=0;
for(int i=0;i<st1.size();i++){
if(st1[i]=='m'){s1+=d*1000;d=1;}
else if(st1[i]=='c'){s1+=d*100;d=1;}
else if(st1[i]=='x'){s1+=d*10;d=1;}
else if(st1[i]=='i'){s1+=d*1;d=1;}
else d=st1[i]-'0';

}
for(int i=0;i<st2.size();i++){
if(st2[i]=='m'){s2+=d*1000;d=1;}
else if(st2[i]=='c'){s2+=d*100;d=1;}
else if(st2[i]=='x'){s2+=d*10;d=1;}
else if(st2[i]=='i'){s2+=d*1;d=1;}
else d=st2[i]-'0';

}
S=s1+s2;
int r=S/1000;S=S%1000;
if(r>0){if(r>1)cout<<r;cout<<'m';}
r=S/100;S=S%100;
if(r>0){if(r>1)cout<<r;cout<<'c';}
r=S/10;S=S%10;
if(r>0){if(r>1)cout<<r;cout<<'x';}
r=S;
if(r>0){if(r>1)cout<<r;cout<<'i';}



cout<<endl;
}
return 0;
}