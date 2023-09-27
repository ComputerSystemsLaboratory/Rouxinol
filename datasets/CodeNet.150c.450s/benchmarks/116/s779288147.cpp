#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    ll n,k;
    while(cin>>n>>k,n+k){
    vl dp;
    vl sum(n,0);
    rep(i,n){
        ll ujimatu; cin>>ujimatu;
        dp.push_back(ujimatu);
        if(!i)sum[i]=ujimatu;
        else if(i<k)sum[i]=sum[i-1]+ujimatu;
        else sum[i]=ujimatu+sum[i-1]-dp[i-k];
        
    }
    ll ans=-INF*INF;
    rep(i,n)if(i>=k-1)cmax(ans,sum[i]);
    ///ep(i,n)if(i>=k-1)cout<<sum[i]<<endl;
    cout<<ans<<endl;
    }
}