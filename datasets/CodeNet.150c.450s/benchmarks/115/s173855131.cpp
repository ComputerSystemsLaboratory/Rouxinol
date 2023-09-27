#include <stdio.h>
#include <string.h>
int main(){
  int k,m,n,i,j,q,c[1001][1001],max=0;
  char X[1000],Y[1000];
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%s %s",X,Y);
    m=strlen(X);
    n=strlen(Y);
    for(j=m;j>=1;j--){
      X[j]=X[j-1];
    }
    X[0]=' ';
    X[m+1]='\0';
    for(j=n;j>=1;j--){
      Y[j]=Y[j-1];
    }
    Y[0]=' ';
    Y[n+1]='\0';
    for(j=1;j<=m;j++)c[j][0]=0;
    for(j=1;j<=n;j++)c[0][j]=0;
    for(j=1;j<=m;j++){
      for(k=1;k<=n;k++){
	if(X[j]==Y[k])c[j][k]=c[j-1][k-1]+1;
	else{
	  if(c[j][k-1]>c[j-1][k])c[j][k]=c[j][k-1];
	  else c[j][k]=c[j-1][k];
	}
	if(max<c[j][k])max=c[j][k];
      }
    }
    printf("%d\n",max);
    max=0;
  }
  return 0;
}
  

