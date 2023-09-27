#include<cstdio>
#include<iostream>
using namespace std;

int main(){
int S,h,m,s;
scanf("%d",&S);
s=S%60;
m=(S-s)/60%60;
h=(S-m*60-s)/3600;
printf("%d:%d:%d\n",h,m,s);
}