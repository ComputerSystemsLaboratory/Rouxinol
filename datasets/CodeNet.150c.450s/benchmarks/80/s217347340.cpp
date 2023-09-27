#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int ai,am,ac,ae;
  int bi,bm,bc,be;
  
  scanf(" %d %d %d %d",&ai,&am,&ac,&ae);
  scanf(" %d %d %d %d",&bi,&bm,&bc,&be);
  
  printf("%d\n",max(ai+am+ac+ae,bi+bm+bc+be));
  
  return 0;
}