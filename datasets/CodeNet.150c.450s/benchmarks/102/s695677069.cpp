#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)

typedef long long ll;

int w,h;
int a[20][20];
int dx[4] = {1,-1,0,0} , dy[4] = {0,0,1,-1};
int ans;

void dfs(int i , int j){
    a[i][j]=0;
    ans++;
    REP(k,4){
        int ii=i+dx[k] , jj=j+dy[k];
        if (ii>=0 && ii<h && jj>=0 && jj<w && a[ii][jj]){
            dfs(ii,jj);
        }
    }
}

int main(void) {
    while (cin>>w>>h && w){
        int x , y;
        REP(i,h){
            REP(j,w){
                char c;
                cin >> c;
                if (c=='.')
                    a[i][j]=1;
                else if (c=='#')
                    a[i][j]=0;
                else{
                    a[i][j]=1;
                    x=i;
                    y=j;
                }
            }
        }
        ans = 0;
        dfs(x,y);
        cout << ans << endl;
    }
    
    return 0;
}