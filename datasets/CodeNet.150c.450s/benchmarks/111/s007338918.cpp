#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;
cin >>n;
int b;
long long int c[21][n-1];
cin >>b;
int d;
d=0;
while(d<21){
if(d==b){c[d][0]=1;}
else{c[d][0]=0;}
d=d+1;}
int e;
e=1;
while(e<n-1){
d=0;
cin >>b;
while(d<21){
c[d][e]=0;
if(d>=b){c[d][e]=c[d][e]+c[d-b][e-1];}
if(d+b<=20){c[d][e]=c[d][e]+c[d+b][e-1];}
d=d+1;}
e=e+1;}
cin >>b;
cout <<c[b][n-2]<<endl;}