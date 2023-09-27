#include<iostream>
using namespace std;
#include<stdio.h>
int f_r(int d,int x){
x=x+d;
if(x>=600)return 0;
return d*x*x+f_r(d,x);
}
int main(){
int d;
int s;
while((scanf("%d",&d))!=EOF){
s=f_r(d,0);
printf("%d\n",s);
}
return 0;
}