#include<stdio.h>
int main(){
 char AFN[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char ars[27]="abcdefghijklmnopqrstuvwxyz";
  char s1,s2[1201];
  int a=0,i,j=0,l=0;
  while(scanf("%c",&s1)!=EOF){
    if(s1>=97&&s1<=122){
      for(j=0;j<26;j++){
	if(s1==ars[j]){
	  s2[l]=AFN[j];
	  l++;
	  a++;
	}
      }
    }
    if(s1>=65&&s1<=90){
      for(j=0;j<26;j++){
	if(s1==AFN[j]){
	  s2[l]=ars[j];
	  l++;
	  a++;
	}
      }
    }  
    if(a==0){
      s2[l]=s1;
      l++;
    }
    a=0;
    j=0; 
  }
  for(i=0;i<l;i++){
    printf("%c",s2[i]);
  }
  return(0);
}