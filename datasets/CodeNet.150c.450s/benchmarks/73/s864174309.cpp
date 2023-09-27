#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int bit[200005];
void add(int i, int x){
  while(i<200005){
    bit[i]+=x;
    i+=i&-i;
  }
}
int sum(int i){
  int ret=0;
  while(i){
    ret+=bit[i];
    i-=i&-i;
  }
  return ret;
}

int main(){
  int n, q;
  scanf("%d%d", &n, &q);
  for(int i=0; i<q; i++){
    int t, x, y;
    scanf("%d%d%d", &t, &x, &y);
    if(t) printf("%d\n", sum(y)-sum(x-1));
    else add(x, y);
  }
}