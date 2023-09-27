#include <stdio.h>
#include <string.h>

int main(){
  char str[1000],ord[10],work[1000];
  int q,a,b,i,k;

  scanf("%s%d",str,&q);
  
  for(i=0; i<q; ++i){
    scanf("%s",ord);
    memset( work , '\0' , 1000);
    if(strcmp(ord,"replace") == 0){
      
      scanf("%d%d%s",&a,&b,work);
      for(k=a; k <= b; ++k)
	str[k]=work[k-a];
      
    }else if(strcmp(ord,"reverse") == 0){
      
      scanf("%d%d",&a,&b);
      for(k=a; k <= b; ++k)
	work[k-a]=str[k];
      for(k=a; k <= b; ++k)
	str[k]=work[b-k];

    }else{
      
      scanf("%d%d",&a,&b);
      for(k=a; k <= b; ++k)
	work[k-a]=str[k];
      printf("%s\n",work);
      
    }
  }
  


  return 0;
}

