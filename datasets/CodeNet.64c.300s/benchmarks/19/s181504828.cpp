#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int n,a[5008];
int b[5008];

int solve(){
  int res= -100001;
  for(int i=0;i<=n;i++){
    for(int j=n;j>i;j--){
      res=max(res,b[j]-b[i]);
    }
  }
  return res;
}

int main(){
  while(1){
    scanf("%d",&n);
    if(n==0) break;
    for(int i=0;i<n;i++){
      scanf("%d",&a[i+1]);
    }

    b[0]=0;
    for(int i=1;i<=n;i++){
      b[i]=a[i]+b[i-1];
    }

    printf("%d\n",solve());

  }
  return 0;
}