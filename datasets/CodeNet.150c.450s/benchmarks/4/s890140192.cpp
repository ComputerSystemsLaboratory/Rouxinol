#include <stdio.h>
int main(){
  int t,m,f,r;
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    if(m!=-1&&f!=-1){
      t=m+f;
      if(t>=80){
	printf("A\n");
      }
      if(t>=65&&t<80){
	printf("B\n");
      }
      if(t>=50&&t<65){
	printf("C\n");
      }
      if(t<50&&t>=30){
	if(r>=50){
	  printf("C\n");
	}
	else{
	  printf("D\n");
	}
}
      if(t<30){
	printf("F\n");
      }}
    else{      
if(m==-1&&f==-1&&r==-1){
	break;
 }
 else{
   printf("F\n");
 }
    }
  }      
return 0;
  
}