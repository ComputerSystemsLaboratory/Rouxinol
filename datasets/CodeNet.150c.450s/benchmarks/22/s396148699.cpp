#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define all(x) (x).begin(),(x).end()
#define pll pair<ll,ll>
#define rep(i,n) for(int i=0;i<n;i++)
#define sz(x) ((ll)(x).size())
#define pb push_back
#define mp make_pair
#define bit(n) (1LL<<(n))
#define F first
#define S second
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
const ll INF = 1LL<<60;
const ll mod = (int)1e9 + 7;

/*
テストケース全てに目を通す
テストケースが2個以下だったらなんかある
N最小のコーナーケースがないか調べる
制約をしっかりと確認する（1からNまでの順列、全て異なる値などの制約も含め）
操作の逆順を考える
 */

struct  edge{int from,to,cost;};
edge es[2010];
int d[1010];
int V,E;

void Bellman(int s){
    rep(i,V)d[i]=mod;
    d[s]=0;
    int cnt=0;
    while(true){
        bool update=false;
        rep(i,E){
            edge e=es[i];
            if(d[e.from]!=mod && chmin(d[e.to],d[e.from]+e.cost))update=true;
        }
        if(!update){
            rep(i,V){
              	if(d[i]==mod)cout << "INF" << endl;
                else cout << d[i] << endl;
            }
            break;
        }
        if(cnt>V){
          cout << "NEGATIVE CYCLE" << endl;
          break;
        }
        cnt++;
    }
}

int main() {
    //ll N; cin >> N;
    //ll N,M; cin >> N >> M;
    //string S; cin >> S;
    //ll H,W; cin >> H >> W;
    cin >> V >> E;
    int r;
    cin >> r;
  	rep(i,E){
    	int x,y,z;
      	cin >> x >> y >> z;
      	es[i]={x,y,z};
    }
    Bellman(r);
    


}

/*



 */

