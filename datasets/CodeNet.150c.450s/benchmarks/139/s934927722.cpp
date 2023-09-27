#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep1(i,n) for(int i=1;i<=(int)n;i++)
#define sp(n) cout << fixed << setprecision(n)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
using namespace std;
int main(void){
    int n,m;cin>>n>>m;
    vector<vector<int>> t(n);
    rep(i,m){
        int a,b;cin>>a>>b;a--;b--;
        t[a].push_back(b);
        t[b].push_back(a);
    }
    queue<int> que;
    que.push(0);
    vector<int> v(n,0);
    v[0]=-1;
    while(que.size()){
        int x=que.front();que.pop();
        rep(i,t[x].size()){
            int y=t[x][i];
            if(v[y]!=0)continue;
            v[y]=x+1;
            que.push(y);
        }
    }
    cout<<"Yes"<<endl;
    rep(i,n){
        if(i==0)continue;
        cout<<v[i]<<endl;
    }
}