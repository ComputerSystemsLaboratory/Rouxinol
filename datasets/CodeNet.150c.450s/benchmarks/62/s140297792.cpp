#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a[2],b,c,d;
cin>>a[0]>>a[1]>>a[2];
if(a[0]>a[1]){
b=a[0];
a[0]=a[1];
a[1]=b;
}
if(a[1]>a[2]){
c=a[1];
a[1]=a[2];
a[2]=c;
}
if(a[0]>a[1]){
d=a[0];
a[0]=a[1];
a[1]=d;
}
if(a[0]<a[1]<a[2]){
cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
}
     return 0;
}