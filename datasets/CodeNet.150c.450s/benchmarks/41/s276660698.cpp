//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
using in = int64_t;
#define rep(i, n) for (in i = 0; i < (in)(n); i++)
#define REP(i,a,b) for(in i=(in)(a);i<(in)(b);i++)
const double PI=3.14159265358979323846;
const in MOD = 1000000007;
const in INF=1e18+7;
const in inf=1e9+7;
using P=pair<in,in>;
vector<in> dx={0,1,-1,0};
vector<in> dy={1,0,0,-1};

//全2点間の距離をO(V^3)で求める、V:辺の数
//負の辺があっても大丈夫
//d[i][i]<0となったら負の閉路
in MAX_dist=INF;
in V=0;
vector<vector<in>> d(0,vector<in>(0,MAX_dist));//d[x][y]:=x->yのcost,枝が無ければMAX_dist,d[i][i]=0

void init(in n){
    d=vector<vector<in>>(n,vector<in>(n,MAX_dist));
    rep(i,n) d[i][i]=0;
    V=n;
}

void warshall(){
    rep(k,V){
        rep(i,V){
            if(d[i][k]==MAX_dist) continue;
            rep(j,V){
                if(d[k][j]==MAX_dist) continue;
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
}

int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
cout << fixed << setprecision(10);
    in v,e;
    cin>>v>>e;
    in s,t,dist;
    init(v);
    rep(i,e){
        cin>>s>>t>>dist;
        d[s][t]=dist;
    }
    warshall();
    rep(i,v){
        if(d[i][i]<0){
            cout<<"NEGATIVE CYCLE"<<endl;
            return 0;
        }
    }
    rep(i,v){
        rep(j,v-1){
            if(d[i][j]==MAX_dist) cout<<"INF ";
            else cout<<d[i][j]<<" ";
        }
        if(d[i][v-1]==MAX_dist) cout<<"INF"<<endl;
        else cout<<d[i][v-1]<<endl;
    }
}
