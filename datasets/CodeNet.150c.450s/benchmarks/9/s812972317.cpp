#include<string>
#include<iostream>
#include<stdio.h>

using namespace std;
int main(){

string str1,str2,e,v;

int n,m,size;
char ch[1]={};
while(1)
{
cin>>str1;
ch[0]=str1[0];
if(ch[0]=='-')break;
size=str1.size();
scanf("%d",&n);


for(int i=0;i<n;i++){
scanf("%d",&m);
str2=str1.substr(0,m);
//cout<<str2<<endl;
e=str1.erase(0,m);
//printf("%s\n",str1);
str1=e+str2;
}
cout<<str1<<endl;
}
return 0;
}