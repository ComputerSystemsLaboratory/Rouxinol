#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,m,n) for(int i=(m);i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define sz size()

const double EPS = 1e-10;
const int INF = 100000000;

int x,y;
char fie[100][100]={};
char visited[100][100]={};
int c;


void dfs(int sx,int sy){
    if(sx<0 || sy<0 || sx>=x || sy>=y)return;
    if(visited[sy][sx])return;
    if(fie[sy][sx]!='.' && fie[sy][sx]!='@')return;
    c++;
    visited[sy][sx]=true;
    
    int d[5]={-1,0,1,0,-1};
    rep(i,4){
        dfs(sx+d[i],sy+d[i+1]);
    }
}

int main(){
    
    
    while(cin>>x>>y){
        c=0;
        rep(i,100)
        rep(j,100)
        visited[i][j]=false;
        
        int sx=-1,sy=-1;
        if(x==0 && y==0)break;
        
        rep(i,y){
            rep(j,x){
                cin>>fie[i][j];
                if(fie[i][j]=='@'){
                    sx=j,sy=i;
                }
            }
        }
        dfs(sx,sy);
        cout<<c<<endl;
    }
    
    return 0;
}