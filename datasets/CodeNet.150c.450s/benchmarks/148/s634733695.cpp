#include <bits/stdc++.h>
using namespace std;
#define mod (int)1000000007
#define MOD (int)10000000007
#define X 1001100011100001111ll
#define M 26388279066623ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for0e(i, n) for (int i = 0; i <= n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int> 
#define F first
#define S second
#define pi pair<int, int>
#define ppi pair<pair<int,int> , int >
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);
int max(int a,int b){if(a>b) return a; else return b;}
int min(int a,int b){if(a<b) return a; else return b;} 
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
int cbrt(int x){ int lo=1,hi=min(2000000ll,x);while(hi-lo>1){int mid=(lo+hi)/2;if(mid*mid*mid<x){lo=mid;}else hi=mid;}if(hi*hi*hi<=x) return hi;else return lo;} 
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const int N =  (int)(1e6+5); 
// ========================================================
signed main(){
  #ifndef ONLINE_JUDGE
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  #endif
  fio;
    int n;
    cin>>n;
    unordered_map<string,int> cnt;
    for0(i,n){
        string s;
        cin>>s;
        cnt[s]++;
    }
    cout<<"AC x "<<cnt["AC"]<<endl;
    cout<<"WA x "<<cnt["WA"]<<endl;
    cout<<"TLE x "<<cnt["TLE"]<<endl;
    cout<<"RE x "<<cnt["RE"]<<endl;
  rr;
}

