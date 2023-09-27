#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define SORT(v) sort((v).begin(), (v).end())
#define SORTR(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 100000
#define vmax 10000
#define sentinel 2000000000
#define INF (1<<30)
constexpr long long int inf = 1000000000000;
constexpr long long int rinf = -(INT64_MAX);
static const int NIL=-1;

//cout<<fixed<<setprecision(20);cin.tie(0);ios::sync_with_stdio(false);

int n;
vector<int> g[MAX];
int color[MAX];

void dfs(int r,int c){
    stack<int> s;
    s.push(r);
    color[r]=c;
    while(!s.empty()){
        int u=s.top();s.pop();
        for(auto v:g[u]){
            if(color[v]==NIL){
                color[v]=c;
                s.push(v);
            }
        }
    }
}

void assigncolor(){
    int id=1;
    rep(i,n) color[i]=NIL;
    rep(i,n){
        if(color[i]==NIL){
            dfs(i,id++);
        }
    }
}

int main() {
    int s,t,m,q;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>s>>t;
        g[s].push_back(t);
        g[t].push_back(s);
    }
    assigncolor();
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>s>>t;
        if(color[s]==color[t]){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}




