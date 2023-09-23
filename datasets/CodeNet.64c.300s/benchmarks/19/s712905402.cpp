#include <iostream>
using namespace std;
int main(){
int n;
int b;
int c;
int d;
int e;
while(cin >>n){
if(n==0){break;}
int a[n];
b=0;
while(b<n){
cin >>a[b];
b=b+1;}
d=a[0];
b=0;
while(b<n){
e=0;
c=b;
while(c<n){
e=e+a[c];
if(e>d){d=e;}
c=c+1;}
b=b+1;}
cout <<d<<endl;}}