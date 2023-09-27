#include <bits/stdc++.h>

using namespace std;
#define _for(i,j,N) for(int i = (j);i < (N);i++)
#define _rep(i,j,N) for(int i = (j);i <= (N);i++)
#define _dec(i,N,j) for(int i = (N-1);i >= (j);i--)
#define _rec(i,N,j) for(int i = (N);i >=(j);i--)
#define ALL(x) x.begin(),x.end()
#define MEM(a,n) memset(a,n,sizeof(a))
#define fst first
#define scd second
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef long double LD;
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;

int get_int(){int x;scanf("%d",&x);return x;}
LL get_ll(){LL x;scanf("%lld",&x);return x;}
double get_db(){double x;scanf("%lf",&x);return x;}

template<typename T> int chmin(T &a,T b){if(a > b){a = b;return 1;}else return 0;}
template<typename T> int chmax(T &a,T b){if(a <= b){a = b;return 1;}else return 0;}
template<typename T>
ostream& operator<<(ostream& os,const vector<T>& v) {_for(i,0,v.size()) os << v[i] << " ";return os;}
template<typename T>
ostream& operator<<(ostream& os,const set<T>& v){for(auto a:v) os << a <<" ";return os;}
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const pair<T1,T2>& v){os << v.fst <<" "<<v.scd << " ";return os;}
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const map<T1,T2>& v){for(auto a:v) cout << a << endl;return os;}

static const int dx[8] = { 1,  0, -1,  0,  1, -1,  1, -1};
static const int dy[8] = { 0,  1,  0, -1,  1, -1, -1,  1};
const double pi  = acos(-1.0);
const double eps = 1e-8;
const LL  INF  = 0x3f3f3f3f3f3f3f3f;
const int inf  = 0x3f3f3f3f;
const int mod = 1e9+7;

int m,nmin,nmax;
const int maxn = 205;
int score[maxn];
bool get_input(){
    scanf("%d %d %d",&m,&nmin,&nmax);
    if(m == 0) return false;
    
    _for(i,0,m){
        scanf("%d",&score[i]);
    }
    return true;
}
int main(){
    
    while(get_input()){
        int cnt = m;
        int p = 0;
        int ans = 0;
        int gap = -1;
        int k = nmax - 1;
        while(score[k] == score[k+1]){
            k--;
            nmax--;
        }

        p = nmin-1;
        
        while(p <= nmax-1){
            if(chmax(gap,score[p] - score[p+1])) ans = p+1;
            p++;
        }

        while(score[ans-1] == score[ans]) ans++;

        cout << ans << endl;
    }

    return 0;
}
