#include<stdio.h>
#include<iostream>
 
using namespace std;
 
int main(){
 
int x,y;
int p=1;
int dx;
 
cin>>x>>y;
 
while(1){
 
dx=x;
x=y;
y=dx%y;
 
if(y==0)break;
 
 
}
 
 
cout<<x<<endl;
 
return 0;
 
}