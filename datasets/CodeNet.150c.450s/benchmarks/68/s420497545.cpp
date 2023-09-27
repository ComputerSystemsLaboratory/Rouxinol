#include<bits/stdc++.h>
#define INF (1e9)
#define N 1005
using namespace std;

int main(){
  int n,a[N];
  while(1){
    cin>>n;
    if(!n)break;
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    int ans=INF;
    for(int i=0;i<n-1;i++)
      ans=min(ans,a[i+1]-a[i]);
    cout<<ans<<endl;
  }
  return 0;
}