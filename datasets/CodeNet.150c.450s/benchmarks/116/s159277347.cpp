#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int n,k;
  int a[1000000];

  for(;;){
    scanf("%d %d",&n,&k);
    if(!n && !k)break;

    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int sum = 0;
    for(int i=0;i<k;i++)sum += a[i];
    int m = sum;
    for(int i=k;i<n;i++){
      sum += a[i] - a[i-k];
      m = max(m,sum);
    }
    printf("%d\n",m);
  }
}