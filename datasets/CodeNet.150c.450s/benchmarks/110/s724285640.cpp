#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <set>
#include <map>
#include <stdlib.h>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 10000000000LL
#define rep(i,n) for(i=0;i<n;i++)

typedef pair<int,int> pii;

char a[1005][1005];
int used[1005][1005]={};
int h,w;
pii place[10];

int search(int sx,int sy,int gx,int gy){
    int i,j;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,-1,0,1};
    rep(i,h)rep(j,w)used[i][j]=0;
    int ans=0;
    used[sx][sy]++;
    queue<pii> q1,q2;
    q1.push(pii(sx,sy));
    while(1){
        bool f=false;
        while(q1.size()){
            int x=q1.front().first;
            int y=q1.front().second;
            if(x==gx && y==gy){
                f=true;
                break;
            }
            rep(i,4){
                int nx=x+dx[i];//next
                int ny=y+dy[i];//next
                if(nx<0 || nx>=h || ny<0 || ny>=w)continue;
                if(a[nx][ny]!='X' && used[nx][ny]==0){
                    used[nx][ny]++;
                    q2.push(pii(nx,ny));
                }
            }
            q1.pop();
        }

        if(f)break;

        while(q2.size()){
            q1.push(pii(q2.front().first,q2.front().second));
            q2.pop();
        }
        ans++;
    }
    return ans;
}

int main(void) {
    int n,i,j;
    cin>>h>>w>>n;
    rep(i,h){
        cin>>a[i];
        rep(j,w)
            if(a[i][j]=='S'){
                place[0].first=i;
                place[0].second=j;
            }else if(a[i][j]>'0' && a[i][j]<='n'){
                place[a[i][j]-'0'].first=i;
                place[a[i][j]-'0'].second=j;
            }
    }
    
    int ans=0;
    rep(i,n)
        ans+=search(place[i].first,place[i].second,place[i+1].first,place[i+1].second);
        
    cout<<ans<<endl;
    return 0;
}