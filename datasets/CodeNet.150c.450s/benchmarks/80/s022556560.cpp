#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int n1[5]={},n2[5]={},m1,m2,m3,m4,S=0,T=0;
cin>>m1>>m2>>m3>>m4;
S=m1+m2+m3+m4;
cin>>m1>>m2>>m3>>m4;
T=m1+m2+m3+m4;
if(S<T)S=T;
cout<<S<<endl;
return 0;
}