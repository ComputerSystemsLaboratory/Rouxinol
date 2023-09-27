#include<stdio.h>
int main()
{
  int n,r[100],c[100][100];
  int i,j,k,l,m;
   
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&r[i],&j);
  }
  r[n]=j;
  for(i=1;i<=n;i++){
    c[i][i]=0;
  }
     
  for(l=2;l<=n;l++){
    for(i=1;i<=n-l+1;i++){
      j =i+l-1;
      c[i][j]=1000000;
      for(k=i;k<=j-1;k++){
    m=c[i][k]+c[k+1][j]+(r[i-1]*r[k]*r[j]);
       
    if(c[i][j]>m){
      c[i][j]=m;
    }
      }
    }
  }
  printf("%d\n",c[1][n]);
   
  return 0;
}