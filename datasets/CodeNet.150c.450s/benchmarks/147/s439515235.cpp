#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#pragma GCC optimize "trapv"
#define _GLIBCXX_DEBUG
#define ll long long int
#define ld long double
#define ull unsigned long long int  // ranges from (0 - twice of long long int)
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define MOD 1000000007LL
#define llpair pair<ll,ll>
#define INF 1000000000000000000ll		// this is 1e18 long long 
#define np next_permutation
#define PI acos(-1)
#define DEB(x) cout<<#x<<" "<<x<<endl;
#define rotate_left(vec,amt) rotate(vec.begin(),vec.begin()+amt,vec.end());
#define rotate_right(vec,amt) rotate(vec.begin(),vec.begin()+vec.size()-amt,vec.end());
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define clr(x) memset(x,0,sizeof(x))
using namespace std;
ll a[10004];
int main()
{
    speed;
    ll n;
  cin>>n;
  rep(i,1,102)
    rep(j,1,102)
    rep(k,1,102)
  {
    ll x;
   x=i*i+j*j+k*k+j*k+k*i+j*i;
    if(x<10004)
      a[x]++;
  }
  rep(i,1,n+1)
  {
    cout<<a[i]<<endl;
  }
  
    return 0;
}
