#include <iostream>
using namespace std;

int main(){
int a[30];
int b[28];
int c;
c=0;
while(c<28){
cin >> b[c];
c=c+1;}
c=0;
while(c<30){
a[c]=0;
c=c+1;}
c=0;
while(c<28){
a[b[c]-1]=1;
c=c+1;}
c=0;
while(c<30){
if(a[c]==0){cout << c+1 <<endl;}
c=c+1;
}
}