#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cctype>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <utility>
#include <complex>
#include <memory>
#include <functional>
using namespace std;
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long LL;
typedef long long int LLI;

int memo[20][20];

int mx[] = {0,0,-1,1};
int my[] = {-1,1,0,0};

char table[21][21];

int dfs(int x,int y);
int W=0,H=0;

int main(void)
{
    while(1){
    int i,j;
    int x,y;
    int ans=0;
    cin>> W >> H;
    
    if(W==0 && H==0)break;
    
    REP(i,0,H){
        REP(j,0,W){
            cin >> table[i][j];
            if(table[i][j] == '@'){
                x=i;
                y=j;
            }
        }
    }
    ans = dfs(x,y);
    cout << ans << endl;
    }
    return 0;
}

int dfs(int x,int y){
    int cnt=1;
    for(int i=0;i<4;i++){
        int nx = x+mx[i],ny = y+my[i];
        if(0 <= nx && 0 <= ny && ny < W && nx < H && table[nx][ny] == '.'){
            table[nx][ny] = '#';
            cnt += dfs(nx,ny);
        }
    }
    return cnt;
}