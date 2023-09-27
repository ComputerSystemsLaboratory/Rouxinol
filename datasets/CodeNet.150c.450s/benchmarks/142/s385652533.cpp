/*
  coded by: mi_ni_
  "LIVE LONG AND PROSPER"
*/
 
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define newl '\n'
#define TEST_CASE(fun) int tc; cin>>tc; while(tc--){ fun(); }
#define TEST_CASE_2 int tc; cin>>tc; for(int i=1;i<=tc;i++)
#define TEST_CASE_3(fun) int tc; cin>>tc; for(int i=1;i<=tc;i++){ cout<<"Case #"<<i<<": "; fun(); }
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define forab(i,a,b) for(int i=(int)(a);i<=(int)(b);i++)
#define forabr(i,a,b) for(int i=(int)(a);i>=(int)(b);i--)
#define all(x) x.begin(),x.end()
#define trav(i,x) for(auto& i:x)

using ll=long long int;
using ull=unsigned long long int;
using ld=long double;
using pii=pair<int, int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vl=vector<ll>;
using vii=vector<pii>;
using vll=vector<pll>;

const ld pi=acosl(-1);
const int inf=(int)1e9+7;
const ll INF=(ll)1e18+7;

//other
template<typename T> inline bool powerof2(T a){ return (a&&(!(a&(a-1)))); }
template<typename T> inline T log_2(T a){ T res=-1; while(a){ a/=2; res++; } return res; }

//make sure to choose TEST_CASE in main for multiple test cases
void solve(){
	int n,k;
	cin>>n>>k;
	vi arr(n);
	trav(i,arr) cin>>i;
	for(int i=0,j=k;j<n;i++,j++) arr[j]>arr[i] ? cout<<"Yes"<<newl : cout<<"No"<<newl;
}

int main(){
    FAST_IO
    cout<<fixed<<setprecision(10);
    //init_fact();
    //TEST_CASE(solve)
    //TEST_CASE_2{}
    //TEST_CASE_3(solve)
    solve();
    return 0;
}