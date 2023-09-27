#include<bits/stdc++.h>
using namespace std;
int v[20000];
int main(){
  int n; scanf("%d", &n);
  for(int i = 1; i < 105; i++){
    for(int j = 1; j < 105; j++){
      for(int k = 1; k < 105; k++){
        int t = i*i+j*j+k*k+i*j+j*k+k*i;
        if(t <10050) v[t]++;
      }
    }
  }
  for(int i = 1; i <= n; i++){
    printf("%d\n", v[i]);
  }
  return 0;
}