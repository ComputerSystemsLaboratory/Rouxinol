#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int x,i=1;
while(true){
scanf("%d",&x);
if(x==0)return 0;
printf("Case %d: %d\n",i,x);
i++;
}
return 0;
}