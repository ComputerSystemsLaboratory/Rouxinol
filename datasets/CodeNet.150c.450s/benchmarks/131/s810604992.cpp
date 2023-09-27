#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<unordered_map>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>
#define X first
#define Y second
#define pb push_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y-1);(X) >=0;--(X))
#define repe(X,Y) for ((X) = 0;(X) < (Y);++(X))
#define peat(X,Y) for (;(X) < (Y);++(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int large(int n,int l){
  vector<int> v;
  rep(i,l){
    v.pb(n%10);
    n/=10;
  }
  sort(rall(v));
  int re=0;
  rep(i,l){
    re*=10;
    re+=v[i];
  }
  return re;
}
int small(int n,int l){
  vector<int> v;
  rep(i,l){
    v.pb(n%10);
    n/=10;
  }
  sort(all(v));
  int re=0;
  rep(i,l){
    re*=10;
    re+=v[i];
  }
  return re;
}

int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  int n,l;
  while(cin>>n>>l){
    if(!l)break;
    map<int,int> mp;
    for(int cnt=0;;++cnt){
      if(mp.count(n)){
	cout<<mp[n]<<" "<<n<<" "<<cnt-mp[n]<<endl;
	break;
      }
      mp[n]=cnt;
      //cout<<cnt<<","<<large(n,l)<<","<<small(n,l);
      n=large(n,l)-small(n,l);
      //cout<<":"<<n<<endl;
    }
  }
  return 0;
}