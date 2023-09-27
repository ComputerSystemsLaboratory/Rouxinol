#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

int money,c[1010],n,x;
int main(){
  while(true){
    x=0;
    scanf("%d",&money);
    if(money==0){break;}
    n=1000-money;
    for(int i=0;500<=n;i++){x++;n=n-500;}
    for(int i=0;100<=n;i++){x++;n=n-100;}
    for(int i=0;50<=n;i++){x++;n=n-50;}
    for(int i=0;10<=n;i++){x++;n=n-10;}
    for(int i=0;5<=n;i++){x++;n=n-5;}
    for(int i=0;1<=n;i++){x++;n=n-1;}
    printf("%d\n",x);
  }
}