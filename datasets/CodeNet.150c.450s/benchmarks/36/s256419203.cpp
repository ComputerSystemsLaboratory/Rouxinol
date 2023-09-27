//Integral
#include<bits/stdc++.h>
using namespace std;

int main(){
  int d, ans;
  while(scanf("%d", &d)!=EOF){
    ans=0;
    for(int i=d; i<600; i+=d) ans+=pow((double)i, 2.0)*d;
    printf("%d\n", ans);
  }
  return 0;
}