#include <string.h>
#include <stdio.h>
int main(){
  int i,j,q,x,y;
  char str[1000],str2[10],w[1000],r;
  scanf("%s %d",str,&q);
  for(i=0;i<q;i++){
    scanf(" %s",str2);
    if(strcmp(str2,"replace")==0){
      scanf(" %d %d %s",&x,&y,w);
      for(j=x;j<=y;j++){
        str[j]=w[j-x];
      }
    }
    else if(strcmp(str2,"reverse")==0){
      scanf(" %d %d",&x,&y);
      while(x<y){
        r=str[x];
        str[x]=str[y];
        str[y]=r;
        x++;
        y--;
      }
    }
    else if(strcmp(str2,"print")==0){
      scanf(" %d %d",&x,&y);
        for(j=x;j<=y;j++){
          printf("%c",str[j]);
      }
      printf("\n");
    }
  }
  return 0;
}