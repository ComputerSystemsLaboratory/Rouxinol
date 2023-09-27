#include <bits/stdc++.h>
using namespace std;

int a[200001];
int main(){
  int N,K,i;
  scanf("%d%d",&N,&K);
  
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);
  
  for(i=0;i<N-K;i++)
    if (a[i] < a[K+i])
      printf("Yes\n");
  	else
      printf("No\n");

  return 0;
  
}