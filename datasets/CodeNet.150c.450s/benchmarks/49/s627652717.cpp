#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,int> plli;
typedef pair<int,pii> pipii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<pii> vpii;

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n);i>=0;i--)
#define rrep2(i,a,b) for (int i=(a);i>b;i--)
#define pb push_back
#define fi first
#define se second
#define all(a) (a).begin(),(a).end()

const ll mod = 1e9 + 7;
const ll INF = 1<<30;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
const double pi = 3.141592653589793;
int n;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    while (n!=0) {
        int  s[105]={};
        rep(i,n) cin >> s[i];
        sort(s,s+n);
        int ans=0;
        rep2(i,1,n-1) ans+=s[i];
        cout << ans /(n-2) << endl;
        cin >> n;
    }
    return 0;
}