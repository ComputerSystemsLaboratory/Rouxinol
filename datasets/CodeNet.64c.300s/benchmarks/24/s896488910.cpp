#include<bits/stdc++.h>
#define ll long long
using namespace std;
                   
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout<<fixed;
#ifdef LOCAL_DEFINE
    freopen("in", "r", stdin); 
    freopen("out","w",stdout);
#endif
  int n;
  while(cin>>n,n){
    int a[100001],b[100001];
    for(int i=0;i<n;i++){
      cin>>a[i]>>b[i];
    }
    ll ansa=0,ansb=0;
    for(int i=0;i<n;i++){
      if(a[i]>b[i])ansa+=a[i]+b[i];
      else if(a[i]==b[i])ansa+=a[i],ansb+=b[i];
      else ansb+=a[i]+b[i];
    }
    cout<<ansa<<" "<<ansb<<endl;
  }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
  return 0;
}