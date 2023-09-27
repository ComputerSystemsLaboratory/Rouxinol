#include<cstdio>
#include<iostream>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  while(n!=0|k!=0){
    int max=0,ans,i;
    int a[n];
    for(i = 0;i < n;i++){
      scanf("%d",&a[i]);
      if(i < k){
	max += a[i];
	ans = max;
      }
      else {
	max = max + (a[i] - a[i-k]);
	if(ans < max) ans = max;
      }
    }
    printf("%d\n",ans);
    cin >> n >> k;
  }
  return (0);
}