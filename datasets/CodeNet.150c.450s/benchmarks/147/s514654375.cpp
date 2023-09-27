/*---------------------------------- NEVER GIVE UP --------------------------------------------*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double ld;
typedef pair<ll,ll> pii;
typedef tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define debug1(x) cerr<<#x<<" : "<<x<<endl
#define debug2(x,y) cerr<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<endl
#define debug3(x,y,z) cerr<<#x<<" : "<<x<<" "<<#y<<" : "<<y<<" "<<#z<<" : "<<z<<endl
#define fastt ios_base::sync_with_stdio(false); cin.tie(NULL) ; cout.tie(NULL)

const ll modd=1e9+7;
const ll inff=1e18;

ll poww(ll a,ll b){
  ll ans=1;
  while(b){
    if(b&1LL) ans=(ans*a);
    a=(a*a);
    b=b>>1LL;
  }
  return ans;
}

/*-----------------------------------------------------------------------------------------------*/

const ll N = 1e4+5;

ll ans[N];

int main(){
  fastt;

  for(ll j = 1; j*j < N; j++)
        for(ll k = 1; k*k < N-j*j; k++)
            for(ll l = 1; l*l < N-j*j-k*k; l++){
                if(j*j+k*k+l*l+j*k+k*l+j*l < N) ans[j*j+k*k+l*l+j*k+k*l+j*l]++;
            }
   
  ll n;
  cin >> n;

  for(ll i = 1; i <= n; i++){
      cout << ans[i] << '\n';
  }
 
  return 0;
}