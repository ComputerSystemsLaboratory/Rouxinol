#include <stdio.h>

int main(){
  int n=0;
  int sort[101];
  scanf("%d", &n);
  for(int i=n;i>0;i--){
    scanf("%d", &sort[i]);
  }
  for(int i=1;i<=n;i++){
    printf("%d", sort[i]);
    if(i!=n){printf(" ");}else{printf("\n");}
  }
}