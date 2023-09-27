#include<stdio.h>
#include<string.h>
int main(){
  int n,i,k,a,b,q;
  char str[1000];
  char order[10];
  scanf("%s",str);
  scanf("%d",&q);
  for(n=0;n<q;n++){
    scanf("%s",order);
    scanf("%d %d",&a,&b);
    if(strcmp(order,"print")==0){
      for(i=a;i<=b;i++){
        printf("%c",str[i]);
      }
      printf("\n");
    }
    if(strcmp(order,"reverse")==0){
      char work[1000]={0};
      k=b;
      for(i=a;i<=b;i++){
        work[i]=str[k];
        k--;
      }
      for(i=a;i<=b;i++){
        str[i]=work[i];
      }
    }
    if(strcmp(order,"replace")==0){
      char p[b-a+1];
      scanf("%s",p);
      k=0;
      for(i=a;i<=b;i++){
        str[i]=p[k];
        k++;
      }
    }
  }
  return 0;
}