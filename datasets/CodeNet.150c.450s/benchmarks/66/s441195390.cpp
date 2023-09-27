#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
struct EE{string st;};

int main(){

int n,m;
while(cin>>n){
struct EE R[260];
for(int i=0;i<n;i++)
cin>>R[i].st;
cin>>m;string str;
bool f=true;
for(int i=0;i<m;i++)
{cin>>str;
for(int j=0;j<n;j++)
if(R[j].st==str&&f==false){
cout<<"Closed by "<<str<<endl;
f=true;break;
}
else if(R[j].st==str&&f==true){
cout<<"Opened by "<<str<<endl;
f=false;break;
}
else if(j==n-1){
cout<<"Unknown "<<str<<endl;
}
}
}
return 0;
}