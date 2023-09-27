#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  while(true){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n==0&&k==0) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    int sum = 0,ans = 0;
    for(int i=0;i+k<=n;i++){
      if(i==0){
        for(int j=0;j<k;j++) sum += a[i+j];
        ans = sum;
      }else{
        sum = sum - a[i-1] + a[i+k-1];
        ans = max(ans,sum);
      }
    }
    printf("%d\n",ans);
  }
}