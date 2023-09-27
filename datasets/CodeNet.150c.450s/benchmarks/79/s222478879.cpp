#include <stdio.h>
int main(){
  int n,r,p,c,i,j,k,l,nh[51],s[51];
  while(1){
    scanf("%d%d",&n,&r);
    if(n==0&&r==0) break;
 
    for(i=n;i>=1;i--){
      nh[n-i+1]=i;
    }
  
    for(i=0;i<r;i++){
      scanf("%d%d",&p,&c);
      for(j=p;j<=p+c-1;j++){
        s[j]=nh[j];
      }
    l=0;
      for(j=1;j<=c;j++){
    for(k=p-1+l;k>=1+l;k--){
          nh[k+1]=nh[k];
    }
        l++;
      }
     
      for(j=p;j<=p+c-1;j++){
        nh[j-p+1]=s[j];
      }
    }
 
    printf("%d\n",nh[1]);
  }
    return 0;
}