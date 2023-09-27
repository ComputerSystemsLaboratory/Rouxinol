#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)

int h,w;


void dfs(int y,int x,vector<string> data,bool used[101][101]){
    int dy[]={1,0,-1,0};
    int dx[]={0,1,0,-1};

    rep(i,4){
        int ddy = y+dy[i];
        int ddx = x+dx[i];
        
        if( ddx>=0 && ddy>=0 && ddx<w && ddy<h && data[ddy][ddx]==data[y][x] && !used[ddy][ddx]){
            used[ddy][ddx]=true;
            dfs(ddy,ddx,data,used);
        }
    }
}


int main(){
    
    while(cin>>h>>w&&(h||w)){
        vector<string> data(h);
        
        rep(i,h)cin>>data[i];
        
        bool used[101][101]={};
        int c=0;
        rep(i,h){
            rep(j,w){
                if(!used[i][j]){
                    used[i][j]=true;
                    dfs(i,j,data,used);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    
}