#include<bits/stdc++.h>
using namespace std;

#define A_MAX 2000001
#define C_MAX 10001

int A[A_MAX], B[A_MAX], C[C_MAX];

int main(void){
  int i;
  int n;

  scanf("%d", &n);

  for(i=0; i<n; i++){
    scanf("%d", &A[i]);
    C[A[i]]++;
  }

  for(i=1; i<C_MAX; i++) C[i]+=C[i-1];
  for(i=n-1; i>=0; i--){
    C[A[i]]--;
    B[C[A[i]]]=A[i];
  }

  for(i=0; i<n; i++){
    if(!i)printf("%d", B[i]);
    else printf(" %d", B[i]);
  }

  printf("\n");
  
  return 0;
}

