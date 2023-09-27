#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
string st;
int n;
while(1){
cin>>n;if(n==0)break;
bool l=false,r=false,p=false;
int c=0;

for(int i=0;i<n;i++)
{
cin>>st;
if(st=="ru")r=true;
if(st=="rd")r=false;
if(st=="lu")l=true;
if(st=="ld")l=false;
if(r&&l&&p==false){c++;p=true;}
if(r==false&&l==false&&p==true){c++;p=false;}
}
cout<<c<<endl;
}
return 0;
}