#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <cmath>
#include <queue>
#include <tuple>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;

using ll=long long;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<string,int> si;
typedef pair<int,ii> iii;
typedef vector <si> vsi;
typedef vector <ii> vii;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <vll> vl2d;
typedef vector <vi> vi2d;
typedef vector <char> vc;
typedef vector <bool> vb;
typedef vector <string> vs;
typedef map <string,vs> msvs;
typedef map <string,int> msi;
typedef map <char,int> mci;
typedef map <int,int> mii;
typedef map <long,long> ml;
typedef map <string,string> mss;
#define rep(i,a,n) for (ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define foreach(x,arr) for(auto& x:arr)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define endl '\n' // Normal `cout << endl` flushes the output every time wich hit performance badly
#define INF 1000000000LL
#define MOD 1000000007ll
#define deb(x) cout<<#x<<": "<<x<<endl;
#define printArray(arr) for(auto x: arr) { cout<<x<<"\t"; }
#define printMatrix(mat) for(auto x: mat) { cout<<" "; printArray(x); cout<<endl; }
#define printMap(mmap) for(auto p: mmap) { cout<< p.first<<": "<<p.second<<endl; }
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define forch(ch,str) for(char& c : str)
#define FILL(a,b) memset(a,b,sizeof(a))
//Swift related stuff
#define append push_back
#define nil nullptr
#define guard(_condition) if (bool(_condition)){}
#define count size()
#define let const auto
#define var auto
#define startsWith(str) rfind(str, 0)
#define prq priority_queue
#define tostr(argument) to_string(argument)
#define alphabet "abcdefghijklmnopqrstuvwxyz"


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); // Fast input
    
    ll n,m;
    cin>>n>>m;
    map<ll, vll> g;
    rep(i,0,m) {
        ll s,d;
        cin>>s>>d;
        g[s-1].push_back(d-1);
        g[d-1].push_back(s-1);
    }
    
    bool visited[n];
    memset(visited, false, sizeof visited);
    deque<ll> q;
    q.push_back(0);
    vll res(n,0);
    ll total = n;
    while (!q.empty()) {
        ll cur = q.front();
        q.pop_front();
        foreach(n, g[cur]) {
            guard(!visited[n]) else {
                continue;
            }
            visited[n] = true;
            res[n] = cur+1;
            q.push_back(n);
            total -= 1;
        }
    }
    guard(total == 0) else {
        cout<<"No"<<endl;
        return 0;
    }
    
    cout<<"Yes"<<endl;
    rep(i,1,n) {
        cout<<res[i]<<endl;
    }
    return 0;
}
