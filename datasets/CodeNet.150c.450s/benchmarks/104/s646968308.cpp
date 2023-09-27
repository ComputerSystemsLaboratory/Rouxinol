//Drawing Lots
#include<bits/stdc++.h>
using namespace std;

int ans[31];

int main(){
  int w, n;
  scanf("%d", &w);
  for(int i=1; i<=30; i++){
    ans[i]=i;
  }
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int a, b;
    scanf("%d,%d", &a, &b);
    swap(ans[a], ans[b]);
  }
  for(int i=1; i<=w; i++){
    printf("%d\n", ans[i]);
  }
  return 0;
}