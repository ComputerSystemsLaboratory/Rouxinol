#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int n,tmp,ans;
  int a[5000];

  while(scanf("%d",&n) && n){
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    
    ans = a[0];
    for(int i=0;i<n;i++)
      for(int j=i;j<n;j++){
	if(i==j)tmp = a[i];
	else tmp += a[j];
	ans = max(tmp,ans);
      }
    printf("%d\n",ans);
  }
}