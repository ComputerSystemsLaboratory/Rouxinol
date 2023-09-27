#include <stdio.h>

int judge(char A[], char B[]){
  int a=0, b=0, sw=0, ans=0;
  int i, j;
  int C[1001][1001];
  
  while(sw == 0){
    if(A[a] != '\0')
      a++;
    else
      sw = 1;
  }
  
  sw = 0;
  
  while(sw == 0){
    if(B[b] != '\0')
      b++;
    else
      sw = 1;
  }
  
  for(i=1; i<a+1; i++)
    C[i][0] = 0;
  for(i=1; i<b+1; i++)
    C[0][i] = 0;
  
  for(i=1; i<a+1; i++){
    for(j=1; j<b+1; j++){
      if(A[i-1] == B[j-1])
        C[i][j] = C[i-1][j-1] + 1;
      else if(C[i-1][j] >= C[i][j-1])
        C[i][j] = C[i-1][j];
      else
        C[i][j] = C[i][j-1];
      if(ans < C[i][j])
        ans = C[i][j];
    }
  }
  
  return ans;
}

int main(){
  char A[1000], B[1000];
  int n, i;
  
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
    scanf("%s", A);
    scanf("%s", B);
    printf("%d\n", judge(A, B));
  }
  
  return 0;
}