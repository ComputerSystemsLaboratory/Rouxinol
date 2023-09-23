#include <iostream>
#include <string>
using namespace std;
int main(){
int a[100];
int b;
b=0;
while(b<100){
a[b]=0;
b=b+1;}
int n;
while(cin >>n){
a[n]=a[n]+1;}
int c;
c=0;
b=0;
while(b<100){
if(a[b]>c){c=a[b];}
b=b+1;}
b=0;
while(b<100){
if(c==a[b]){cout <<b<<endl;}
b=b+1;}
}