#include<stdio.h>

void proc(int n,int x){
  int cnt=0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
	  for(int k=j+1;k<=n;k++){
	    if(i+j+k==x)++cnt;
		else if(i+j+k>x)break;
	  }
	}
  }
  printf("%d\n",cnt);
}

int main(){
  while(true){
    int a,b;
	scanf("%d%d",&a,&b);
	if(!a&&!b)break;
	proc(a,b);
  }
  return 0;
}