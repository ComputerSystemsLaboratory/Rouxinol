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
int main()
{
    speed;
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n ,k;
        cin>>n>>k;
        ll a[n],temp=1;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=k;i<n;i++)
        {
            if(a[i]>a[i-k])
            {
            cout<<"Yes"<<endl;
            }
            else
            cout<<"No"<<endl;
            
        }
    }
    return 0;
}