#include <stdio.h>
#include <string.h>
int main(){
  int count,oorc,flag,n,m,i,j,k,len;
  char u[258][11],t[258][11];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",u[i]);
  }
  oorc=0;
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",t[i]);
    flag=0;
    len=strlen(t[i]);
   
  
    for(j=0;j<n;j++){
      count=0;
      for(k=0;k<len;k++){
    if(t[i][len]=='\0'&&u[j][len]!='\0'){
          break;
    }
    if(t[i][k]==u[j][k]){
      count++;
    }
        if(count==len){
          flag=1;
          break;
    }
      }
    }
    if(flag==1&&oorc==0){
      oorc=1;
      printf("Opened by ");
      for(j=0;j<len;j++){
    printf("%c",t[i][j]);
      }
      printf("\n");
    }
    else if(flag==1&&oorc==1){
      oorc=0;
      printf("Closed by ");
      for(j=0;j<len;j++){
    printf("%c",t[i][j]);
      }
      printf("\n");
    }   
    else if(flag==0){
      printf("Unknown ");
      for(j=0;j<len;j++){
    printf("%c",t[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}