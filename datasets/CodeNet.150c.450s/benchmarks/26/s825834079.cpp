#include<iostream>
using namespace std;
int main(){
	int a,b,c[2];
	for(int i=0;i<2;i++){
cin>> c[i];
if(c[i]<-1000||c[i]>1000)cin >> c[i];}
if(c[0]>c[1]){cout<<"a > b"<<endl;}
if(c[0]<c[1]){cout<<"a < b"<<endl;}
if(c[0]==c[1]){cout<<"a == b"<<endl;}
return 0;}
