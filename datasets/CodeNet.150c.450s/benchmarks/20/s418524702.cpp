#include<iostream>
#include<cstdio>
using namespace std;
int x,h,m,s;
int main(){
cin>>x;
h=x/3600;
m=(x%3600)/60;
s=(x%3600)%60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}