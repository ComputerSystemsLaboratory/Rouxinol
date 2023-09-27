#include<bits/stdc++.h>
using namespace std;

long long int n, mat[100+1][100+1], len[100+1];

int main(void){
  int i, j, k, l;

  scanf("%d", &n);
  
  for(int i=1; i<=n; i++){
    scanf("%d %d", &len[i-1], &len[i]);
  }
  
  for(l=2; l<=n; l++){
    for(i=1; i<=n-l+1; i++){
      j=i+l-1;
      mat[i][j]=INT_MAX;

      for(k=i; k<=j-1; k++){
	mat[i][j]=min(mat[i][j], mat[i][k]+mat[k+1][j]+len[i-1]*len[k]*len[j]);
      }
    }
  }

  printf("%d\n", mat[1][n]);
  
  return 0;
}

