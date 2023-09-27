#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
const int MAX=2147483647;
int n,q;
int d[600000];
void init(){
  for(int i=0;i<2*n-1;i++)d[i]=0;
}
void add(int i,int x){
  while(i<=n){
    d[i]+=x;
    i += i & -i;
  }
}
int sum(int i){
  if(i==0)return 0;
  int s=0;
  while(i>0){
    s+=d[i];
    i -= i&-i;
  }
  return s;
}
int getsum(int x,int y){
  return sum(y)-sum(x);
}
int main(){
  scanf("%d %d",&n,&q);
  init();
  for(int i=0;i<q;i++){
    int c,x,y;
    scanf("%d %d %d",&c,&x,&y);
    if(c==0)add(x,y);
    else printf("%d\n",getsum(x-1,y));
  }
  return 0;
}