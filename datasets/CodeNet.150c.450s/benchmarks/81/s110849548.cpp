#include<algorithm>
#include<cassert>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<iomanip>
#include<map>
#include<numeric>
#include<queue>
#include<vector>
#include<set>
#include<string>
#include<stack>
#include<sstream>
#include<complex>

#define pb push back
#define clr clear()
#define sz size()
#define fs first
#define sc second

#define rep(i,a) for(int i=0;i<(int)(a);i++)
#define rrep(i,a) for(int i=(int)(a)−1;i>=0;i−−)
#define all(a) (a).begin(),(a).end()
#define EQ(a,b) (abs((a)−(b)) < EPS)
#define INIT(a) memset(a,0,sizeof(a))

using namespace std;
typedef double D;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

const D EPS = 1e-8;
const int INF = 1e8;
const D PI = acos(-1);

int v; //頂点数
int n;
int a,b,c;
int d[20][20]; //ク&#12441;ラフの隣接行列
void WarshallFloyd(void){ rep(k,v)rep(i,v)rep(j,v)d[i][j] = min(d[i][j],d[i][k]+d[k][j]); }

int main(){
  while(cin >> n,n){
    rep(i,20){
      rep(j,20)d[i][j] = INF;
      d[i][i] = 0;
    }

    v = 0;
    rep(i,n){
      cin >> a >> b >> c;
      v = max(v,max(a,b));
      d[a][b] = d[b][a] = c;
    }
    v++;

    WarshallFloyd();

    int res = -1, dis = INF;
    rep(i,v){
      int tmp = 0;
      rep(j,v)tmp += d[i][j];
      if(dis > tmp){
	dis = tmp; res = i;
      }
    }
    cout << res << " " << dis <<  endl;
  }
    
}