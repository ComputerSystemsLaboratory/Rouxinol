#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int dp[51][51];

int dy[]={0,1,1,1,0,-1,-1,-1};
int dx[]={1,1,0,-1,-1,-1,0,1};


void check(int i,int j,int h,int w){
    dp[i][j]=2;
    for(int a=0;a<8;a++){
        int x=i+dx[a];
        int y=j+dy[a];
        if(x>=0&&x<h&&y>=0&&y<w){
            if(dp[x][y]==1){
                check(x,y,h,w);
            }
        }
    }
}

int main(){
    int h,w,cou;
    while(cin >> w >> h,w){
        cou=0;
        REP(i,h)REP(j,w)cin >> dp[i][j];
        REP(i,h){
            REP(j,w){
                if(dp[i][j]==1){
                    cou++;
                    check(i,j,h,w);
                }
            }
        }
        cout << cou << endl;
    }
}

