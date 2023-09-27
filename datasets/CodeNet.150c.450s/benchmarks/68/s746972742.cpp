#include <bits/stdc++.h> 

using namespace std;
using ll=long long;
using ull=unsigned long long;
using pii=pair<int,int>;

#define INF LONG_MAX
#define MOD 1000000007
#define rng(a) a.begin(),a.end()
#define rrng(a) a.end(),a.begin()

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  while(true){
    int n;
    cin>>n;
    if(n==0)return 0;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int Min=INT_MAX;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(i==j)continue;
        if(Min>abs(a[i]-a[j])){
          Min=abs(a[i]-a[j]);
        }
      }
    }
    cout<<Min<<endl;
  }
  return 0;
}

