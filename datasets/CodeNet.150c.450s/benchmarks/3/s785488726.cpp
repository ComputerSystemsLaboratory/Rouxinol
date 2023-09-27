#include <stdio.h>
int main()
{
  int n,f,e,j,k,i;
  char m[1001],my[1001],c[10],mc[1001];
  scanf("%s",m);
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %d %d",c,&f,&e);
    if(c[0]=='p'){
      for(k=f;k<=e;k++){
	printf("%c",m[k]);
      }
      printf("\n");
    }else if(c[3]=='e'){
      j=e;
      for(k=f;k<=e;k++){
	my[j]=m[k];
	j--;
      }
      for(k=f;k<=e;k++){
	m[k]=my[k];
      }
    }else if(c[3]=='l'){
      scanf("%s",mc);
      j=0;
      for(k=f;k<=e;k++){
	m[k]=mc[j];
	j++;
      }
    }
  }
  return 0;
}