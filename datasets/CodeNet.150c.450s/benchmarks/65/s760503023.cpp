#include <stdio.h>
#include <string.h>
int main(){
  int N,i,j,min,flag;
  char C[36][3],T[3],D[36][3];
  scanf("%d",&N);
  for(i = 0; i < N; i++){
    scanf("%s",C[i]);
    strcpy(D[i],C[i]);
  }
  for(i = 0; i < N; i++){
    for(j = N-1; j >= i+1; j--){
      if((C[j][1] - '0') < (C[j-1][1] -'0')){
        strcpy(T,C[j]);
        strcpy(C[j],C[j-1]);
        strcpy(C[j-1],T);
      }
    }
  }
for(i = 0; i < N-1; i++){
    printf("%s ",C[i]);
  }
  printf("%s\n",C[i]);
  printf("Stable\n");

  for(i = 0; i < N; i++){
    min = i;
    for(j = i; j < N; j++){
      if((D[j][1] - '0') < (D[min][1] - '0')){
        min = j;
      }
  }
    strcpy(T,D[i]);
    strcpy(D[i],D[min]);
    strcpy(D[min],T);
  }
    for(i = 0; i < N-1; i++){
      printf("%s ",D[i]);
    }
    printf("%s\n",D[i]);
    flag = 1;
for(i = 0; i < N; i++){
      if(strcmp(C[i],D[i]) != 0) flag = 0;
    }
    if(flag)printf("Stable\n");
    else printf("Not stable\n");
    return 0;
}