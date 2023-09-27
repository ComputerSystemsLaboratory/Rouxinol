#include<stdio.h>
int main()
{
  int j,i,n,p,c,r,ss=0;
  int N[100000],C[10000],X[10000];
  while(1){
    scanf("%d%d",&n,&r);
    if(n==0 && r==0)break;
    for(i=0;i<n;i++){
      N[i]=i+1;
    }
    for(i=0;i<r;i++){
      scanf("%d%d",&p,&c);
      for(j=0;j<c;j++){
	C[j]=N[n-p-j];
      }
      for(j=n-p+1;j<n;j++){
        N[j-c]=N[j];
      }
      for(j=0;j<c;j++){
        N[n-j-1]=C[j];
      }
      
    }
    /* for(i=0;i<n;i++){
      printf("%d ",N[i]);
      }*/
    X[ss]=N[n-1];
    ss++;
  }
  for(i=0;i<ss;i++){
    printf("%d\n",X[i]);
    }
  return 0;
}