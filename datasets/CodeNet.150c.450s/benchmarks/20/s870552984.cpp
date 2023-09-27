#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int h,m,s;
scanf("%d",&s);
m=s/60;
s%=60;
h=m/60;
m%=60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}