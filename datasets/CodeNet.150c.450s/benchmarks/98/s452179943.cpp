#include<stdio.h>

int n,m,s,i;
int taro[1000];
int hana[1000];
int T,H,X;
int anst,ansh;

int main(){
  while(1){
    scanf("%d %d",&n,&m);
    if(n==0&&m==0)break;

    T=0;
    H=0;
    for(i=0;i<1000;i++){
      taro[i]=0;
      hana[i]=0;
    }
    for(i=0;i<n;i++){
      scanf("%d",&s);
      taro[s]=1;
      T+=s;
    }
    for(i=0;i<m;i++){
      scanf("%d",&s);
      hana[s]=1;
      H+=s;
    }

    
    X=(H-T)/2;
    anst=-1;
    ansh=-1;

    for(i=0;i<=100;i++){
      if(0<=i+X&&taro[i]==1&&hana[i+X]==1){
	anst=i;
	ansh=i+X;
	break;
      }
    }
    
    if((H-T)%2!=0||anst==-1){
      printf("-1\n");
    }else{
      printf("%d %d\n",anst,ansh);
    }

  }
  return 0;
}