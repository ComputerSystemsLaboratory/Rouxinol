#include <cstdio>

int ns[5001];

int max(int a,int b){return a>b?a:b;}

int main(){
  int n;
  while(scanf("%d",&n),n){
    for(int i=1; i<=n; i++)
      scanf("%d",&ns[i]);
    for(int i=2; i<=n; i++)
      ns[i]+=ns[i-1];

    int ans=-100001;
    for(int i=0; i<=n; i++)
      for(int j=0; j<i; j++)
	ans=max(ans,ns[i]-ns[j]);

    printf("%d\n",ans);
  }
}