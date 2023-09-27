#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,ans=0;
  pair<int,int> a[10000];
  while(1){
    ans=0;
    cin>>n>>m;
    if(n==0 && m==0) break;
   
    for(int i=0;i<n;i++){
      cin>>a[i].second>>a[i].first;
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
      if(a[i].second<m) m-=a[i].second;
      else if(m>0){
	ans+=(a[i].second-m)*a[i].first;
	m=0;
      }
      else ans+=(a[i].first)*a[i].second;
    }
    cout<<ans<<endl;
  }
  return 0;
}

