#include <stdio.h>

int n;
int data[10];
int ans[100];

bool solve(int i, int l, int r){
  if(i==10)
    return true;
  if(data[i] > l)
    return solve(i+1,data[i],r);
  if(data[i] > r)
    return solve(i+1,l,data[i]);
  return false;
}
int main(){
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j < 10; j++){
      scanf("%d", &data[j]);
      if(solve(0,0,0)){
        ans[i] = 1;
      }else{
        ans[i] = 0;
      }
    }
  }
  for(int i = 0; i < n; i++){
    if(ans[i])
      printf("YES\n");
    else
      printf("NO\n");
  }
}