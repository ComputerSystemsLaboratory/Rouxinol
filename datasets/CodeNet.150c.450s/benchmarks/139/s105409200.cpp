#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
//#include<boost/multiprecision/cpp_int.hpp>
//#include<boost/multiprecision/cpp_dec_float.hpp>
//namespace mp=boost::multiprecision;
//#define mulint mp::cpp_int
//#define mulfloat mp::cpp_dec_float_100
using namespace std;
struct __INIT{__INIT(){cin.tie(0);ios::sync_with_stdio(false);cout<<fixed<<setprecision(15);}} __init;
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
constexpr int MOD=1000000007;
//constexpr int MOD=998244353;
#define INF (1<<30)
#define LINF (lint)(1LL<<56)
#define endl "\n"
#define rep(i,n) for(lint (i)=0;(i)<(n);(i)++)
#define reprev(i,n) for(lint (i)=(n-1);(i)>=0;(i)--)
#define Flag(x) (1<<(x))
#define Flagcount(x) __builtin_popcountll(x)
#define pint pair<int,int>
#define pdouble pair<double,double>
#define plint pair<lint,lint>
#define fi first
#define se second
typedef long long lint;
int dx[8]={1,1,0,-1,-1,-1,0,1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
const int MAX_N=2e5+5;
//struct edge{lint to,num;};

vector<int> edge[MAX_N];
bool reach[MAX_N];
int ans[MAX_N];

int main(void){
    int N,M;
    cin >> N >> M;
    rep(i,M){
        int u,v;
        cin >> u >> v;
        u--,v--;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    queue<int> q;
    q.push(0);
    reach[0]=true;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        rep(i,edge[now].size()){
            if(reach[edge[now][i]]) continue;
            reach[edge[now][i]]=true;
            ans[edge[now][i]]=now;
            q.push(edge[now][i]);
        }
    }
    cout << "Yes" << endl;
    for(int i=1;i<N;i++) cout << ans[i]+1 << endl;
}