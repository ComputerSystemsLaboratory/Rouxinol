#include<stdio.h>
int main(){
  char AFN[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char ars[27]="abcdefghijklmnopqrstuvwxyz";
  char s1,c='a';
  int i,j=0,data[27]={0};
  while(scanf("%c",&s1)!=EOF){
    if(s1>=97){
      for(j=0;j<26;j++){
	if(s1==ars[j]){
	  data[j]=data[j]+1; 
	}
      }
    }
    if(s1>=65&&s1<=90){
      for(j=0;j<26;j++){
	if(s1==AFN[j]){
	  data[j]=data[j]+1;
	}
      }
    }
    j=0;
  }
  for(i=0;i<26;i++){
    printf("%c : %d\n",c+i,data[i]);
  }
  return(0);
}