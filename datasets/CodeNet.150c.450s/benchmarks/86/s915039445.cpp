#include <stdio.h>
int main(){
 
  int i,n,m,p,k,x[101];
  int sum,s,re;
  while(1){
    scanf("%d%d%d",&n,&m,&p);
    if(n==0&&m==0&&p==0) break;
    sum=0; 
    for(i=1;i<=n;i++){
      scanf("%d",&x[i]);
      sum+=x[i];
      if(i==m) {
        k=x[i];
      }
    }
    re=(double)100*sum*(100-p)/100;
    if(k!=0)re/=k;
    else re=0;
    //    re=sum*(100-p)/100;
    printf("%d\n",re);
    // s=(double)p/(double)100;
    //re*=s;
    
 
    //  re = sum * p;
 
    // printf("%d\n",re/k);
    /*
   if(k>0){
     re/=k;
     printf("%d\n",(int)re);
    }
    else{
      printf("%d\n",0);
    }
    */
  }
 
  return 0;
}