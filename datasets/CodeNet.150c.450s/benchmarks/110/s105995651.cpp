#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#include<map>
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
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int> pii;
#define MAX 99999999
vector<vector<char> > v(2000,vc(2000));
vector<pii>u(1000);
int mx[]={0,0,1,-1};
int my[]={1,-1,0,0};
int h,w,n;
int bfs(pii st,pii g){
    queue<pii>que;
    vvi d(2000,vi(2000,INF));
    que.push(st);
    d[st.first][st.second]=0;
    while(!que.empty()){
        pii p=que.front(); que.pop();
        if(p==g)break;
        rep(i,4){
            int ny=p.first+my[i]; int nx=p.second+mx[i];
            pii np=pii(ny,nx);
            if(0<=ny&&ny<h&&0<=nx&&nx<w&&d[ny][nx]==INF&&v[ny][nx]!='X')
            {
                d[ny][nx]=d[p.first][p.second]+1;
                que.push(np);
            }
        }
    }
    return d[g.first][g.second];
}
int main(){
    pii st;
    cin>>h>>w>>n;
    int ans=0;
    rep(i,h)rep(j,w){
        cin>>v[i][j];
        if(v[i][j]=='S')st=pii(i,j);
            else if(v[i][j]!='X'&&v[i][j]!='.'){
            u[(v[i][j]-48)]=pii(i,j);
            //cout<<v[i][j]-48<<endl;
        }
    }
    u[0]=st;
    for(int i=0;i<n;i++){
        ans+=bfs(u[i],u[i+1]);
    }
    cout<<ans<<endl;
}