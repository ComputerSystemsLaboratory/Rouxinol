#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int a[5];
int b;
b=0;
while(b<5){
cin >>a[b];
b=b+1;}
sort(a,a+5);
b=0;
while(b<5){
cout <<a[4-b];
if(b==4){cout <<endl;}
else{cout <<" ";}
b=b+1;}}