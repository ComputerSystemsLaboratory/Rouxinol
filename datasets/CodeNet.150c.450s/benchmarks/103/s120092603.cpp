#include <cstdio>

int main(){
  int n,s;
  while(scanf("%d %d",&n,&s),n){
    int ans=0;
    for(int i=0; i<1024; i++){
      int a=0,b=0;
      for(int j=0; j<10; j++)
	if((i>>j)&1){a+=j;b++;}
      if(a==s&&b==n) ans++;
    }
    printf("%d\n",ans);
  }
}