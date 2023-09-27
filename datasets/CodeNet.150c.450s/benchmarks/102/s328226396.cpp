#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string fie[30]={};
int w,h;
int c;
bool visited[30][30];

void dfs(int y,int x){
    visited[y][x]=true;
    c++;
    int dx[]={1,0,-1,0};
    int dy[]={0,1,0,-1};
    rep(i,4){
        if(0<=x+dx[i] && x+dx[i]<w  &&  0<=y+dy[i] && y+dy[i]<h  &&  fie[y+dy[i]][x+dx[i]]=='.'  &&  visited[y+dy[i]][x+dx[i]]==false){
            dfs(y+dy[i],x+dx[i]);
        }
    }
}


int main(){
    while(cin>>w>>h){
        c=0;
        if(w==0 && h==0)break;
        rep(i,30)rep(j,30)visited[i][j]=false;
        int sy,sx;
        rep(i,h){
            cin>>fie[i];
        }
        rep(i,h)rep(j,w){
            if(fie[i][j]=='@') sy=i,sx=j;
        }
        
        dfs(sy,sx);
             
        cout<<c<<endl;
    }
}