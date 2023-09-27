#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a,b,x,y,r;
cin>>a>>b>>x>>y>>r;
if(x-r<0||x+r>a){
cout<<"No"<<endl;
}
else if(y-r<0||y+r>b){
cout<<"No"<<endl;
}
else if(x-r>=0&&x+r<=a){
cout<<"Yes"<<endl;
}
     return 0;
}