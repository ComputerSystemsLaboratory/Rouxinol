#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm> 
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include  <ctime>
#include <iomanip>
using namespace std;

#define ll                    long long int
#define ull                   unsigned long long int
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define eb                    emplace_back
#define ab(a)                 (a<0)?(-1*a):a
#define pc                    putchar
#define gc                    getchar
#define mset(a,b,c)           loop(i,0,b) a[i]=c
#define mp                    make_pair
#define itoc(c)               ((char)(((int)'0')+c))
#define all(p)                p.begin(),p.end()
#define max(x,y)              ((x>y)?x:y)
#define min(x,y)              ((x<y)?x:y)
#define mid(s,e)              (s+(e-s)/2)
#define vi                    vector<int>
#define vvi                   vector<vector<int>>
const ll MOD = 1000000007;

ll modpow(ll a, ll b, ll mod) { ll res = 1; for (; b; b >>= 1) { if (b & 1)res = res * a; res%=mod; a = a * a; a%=mod; }return res; }
//ll p(ll a, ll b) { ll res = 1; for (; b; b >>= 1) { if (b & 1)res = res * a;a = a * a; }return res; }

vector<int> parent(300000);
void bfs(vvi& g) {
    queue<int> p;
    p.push(0);
    while(!p.empty()) {
        int node = p.front();
        for(int i : g[node]) { if(parent[i]!=-1) continue; parent[i] = node; p.push(i); }
        p.pop();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /* code */
    int n,m; cin >> n >> m;
    vvi g(n);
    loop(i,0,n) parent[i] = -1;
    loop(i,0,m) { int x,y; cin >> x >> y; x--; y--; g[x].pb(y); g[y].pb(x); }
    bfs(g);
    int flag = 1;
    loop(i,1,n) if(parent[i] == -1) { flag = 0; break; }
    if(!flag) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
        loop(i,1,n) cout << (parent[i] + 1) << "\n";
    }
    /* end code */
}