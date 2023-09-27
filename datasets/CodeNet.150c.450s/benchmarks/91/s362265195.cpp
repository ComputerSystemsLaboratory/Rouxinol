#include<stdio.h>

int pr[78498];
int x = 0;

int nextpr(int p){
  int nxp = p+2;
  int i;
  int ok;
  x++;
  if(p==2)return 3;
  while(1){
      /*printf("p=%d->",nxp);*/
    for(i=0;pr[i]*pr[i]<=nxp;i++){
      ok = 1;
      if(!(nxp%pr[i])){
        ok = 0;
        break;
      }
    }
    if(ok){
      return nxp;
    }else{
      nxp+=2;
    }
  }
}

int main(){
    int n;
    int i,j=0;
    pr[0] = 2;
    while(scanf("%d",&n)!=EOF&&j<30){
        /*printf("n=%d\n",n);*/
        i=0;
        if(n-1){
            while(pr[i]<=n){
                /*printf("prime:%d(%d)\n",pr[i],i+1);*/
                i++;
                if(i>=x){
                    pr[i] = nextpr(pr[i-1]);
                }
            }
        }
        printf("%d\n",i);
        j++;
    }
}