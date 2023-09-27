#include "bits/stdc++.h"

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;
const int MOD = 1e9 + 7;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int w,h;
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    while(cin>>w>>h,w||h){
        vector< vector<int> > field(h,vector<int>(w,1));
        int x,y;
        for(int i=0;i<h;i++){
            string s;cin>>s;
            for(int j=0;j<w;j++){
                if(s[j]=='.') field[i][j]=0;
                else if(s[j]=='@'){x=i;y=j;}
            }
        }
        queue<P> q;
        q.push(P(x,y));
        int res=0;
        while(!q.empty()){
            P p=q.front();q.pop();
            for(int i=0;i<4;i++){
                int nx=p.first+dx[i],ny=p.second+dy[i];
                if(nx<0||h<=nx||ny<0||w<=ny) continue;
                if(field[nx][ny]==1) continue;
                res++;
                field[nx][ny]=1;
                q.push(P(nx,ny));
            }
        }
        cout<<res+1<<endl;
    }
}