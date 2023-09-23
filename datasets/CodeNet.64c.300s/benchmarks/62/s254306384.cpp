#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int n,m;
  int i,j;
  scanf("%d %d", &n, &m);
  
  int ary[n][m];
  int vec[m];

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&ary[i][j]);
    }
  }
  for (i = 0; i < m; i++){
    scanf("%d", &vec[i]);
  }

  int sum;
    for (i = 0; i < n; i++){
      sum=0;
      for (j = 0; j < m; j++){
        sum +=  ary[i][j]*vec[j];
      }
      cout<< sum <<endl;
    }

  return 0;
}