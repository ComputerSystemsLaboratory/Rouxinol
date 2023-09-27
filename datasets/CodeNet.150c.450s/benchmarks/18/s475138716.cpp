#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  int m=100000;
  for (int i=0;i<n;i++){
    m*=1.05;
    if (m%1000){
      m=m/1000*1000+1000;
    }
  }
  printf("%d\n",(int)m);
  return 0;
}