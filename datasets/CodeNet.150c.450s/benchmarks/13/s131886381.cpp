#include <stdio.h>

int main(){

  char s[201];
  char p[101];

  int i,a=0,j,m,n,b=0; 

  scanf("%s",s);

  for(i=0;i<=100;i++){
    if( s[i]=='\0'){
      m=i;
      break;
    }
  }


  scanf("%s",p);

  for(i=0;i<=100;i++){
    if( p[i]=='\0'){
      n=i;
      break;
    }
  }
  //printf("%d %d\n",n,m);

  for(j=m;j<=2*m-1;j++){
    s[j]=s[b];
    b++;
  }

  for(j=0;j<=2*m-1;j++){
    for(i=0;i<=n-1;i++){
      if(p[i]==s[i+j]){
	a++;
      }
      else{
	a=0;
	break;
      }
      if(a==n){
	break;
      }
    }
    if(a==n){
      break;
    }
  }
  //printf("%d\n",a);

  if(a==n){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }

  return 0;
}