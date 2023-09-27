#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
int k;
int b;
int c;//現在の和
int d;//最高値
while(cin>>n){
if(n==0){break;}
cin>>k;
int a[n];
b=0;
while(b<n){
cin >>a[b];
b=b+1;}
c=0;
b=0;
while(b<k){
c=c+a[b];
b=b+1;}
d=c;
while(b<n){
c=c-a[b-k]+a[b];
if(c>d){d=c;}
b=b+1;}
cout << d<<endl;}
}