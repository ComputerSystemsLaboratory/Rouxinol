#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string fie[200];
int h,w;

void dfs(int y,int x,char ch){
    fie[y][x]='-';
    int dy[]={1,0,-1,0};
    int dx[]={0,1,0,-1};
    
    rep(i,4){
        if( 0<=y+dy[i] && y+dy[i]<h  &&  0<=x+dx[i]  && x+dx[i]<w  &&  fie[y+dy[i]][x+dx[i]]==ch ){
            dfs(y+dy[i],x+dx[i],ch);
        }
    }
}



int main(){
    while(cin>>h>>w){
        if(h==0&&w==0)break;
        
        rep(i,h) cin>>fie[i];
        
        int c=0;
        rep(i,h){
            rep(j,w){
                if( fie[i][j]!='-' ){
                    dfs(i,j,fie[i][j]);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}