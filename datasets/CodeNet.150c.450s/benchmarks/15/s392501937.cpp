#include <cstdio>
int main(){
  int i,j,n1,n2,S[10000],T[500],count=0,a;
  scanf("%d",&n1);
  for(i = 0; i < n1; i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&n2);
  for(i = 0; i < n2; i++){
    scanf("%d",&T[i]);
  }
  for(i = 0; i < n2; i++){
    a=0;
    for(j = 0; j < n1; j++){
      if(a == 0){
        if(T[i] == S[j]){
        count++; 
        a++;
        break;
    }
      }
    }
  }
  printf("%d\n",count);
   
  return 0;
}