#include <bits/stdc++.h>
using namespace std;
#pragma region Macros
typedef long long ll;
#define FOR(i,a,b) for (int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(x) (x).begin(),(x).end()
const long long MOD=1e9+7;
// const long long MOD=998244353;
const int INF=1e9;
const long long IINF=1e18;
const int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
const char dir[4]={'D','R','U','L'};
#define LOCAL

template<typename T>
istream &operator>>(istream &is,vector<T> &v){
    for (T &x:v) is >> x;
    return is;
}
template<typename T>
ostream &operator<<(ostream &os,const vector<T> &v){
    for (int i=0;i<v.size();++i){
        os << v[i] << (i+1==v.size()?"": " ");
    }
    return os;
}
template<typename T,typename U>
ostream &operator<<(ostream &os,const pair<T,U> &p){
    cout << '(' << p.first << ',' << p.second << ')';
    return os;
}
template<typename T,typename U>
ostream &operator<<(ostream &os,const map<T,U> &m){
    os << '{';
    for (auto itr=m.begin();itr!=m.end();++itr){
        os << '(' << itr->first << ',' << itr->second << ')';
        if (++itr!=m.end()) os << ',';
        --itr;
    }
    os << '}';
    return os;
}
template<typename T>
ostream &operator<<(ostream &os,const set<T> &s){
    os << '{';
    for (auto itr=s.begin();itr!=s.end();++itr){
        os << *itr;
        if (++itr!=s.end()) os << ',';
        --itr;
    }
    os << '}';
    return os;
}

void debug_out(){cerr << '\n';}
template<class Head,class... Tail>
void debug_out(Head&& head,Tail&&... tail){
    cerr << head;
    if (sizeof...(Tail)>0) cerr << ", ";
    debug_out(move(tail)...);
}
#ifdef LOCAL
#define debug(...) cerr << " ";\
cerr << #__VA_ARGS__ << " :[" << __LINE__ << ":" << __FUNCTION__ << "]" << '\n';\
cerr << " ";\
debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

template<typename T> T gcd(T x,T y){return y!=0?gcd(y,x%y):x;}
template<typename T> T lcm(T x,T y){return x/gcd(x,y)*y;}

template<class T1,class T2> inline bool chmin(T1 &a,T2 b){
    if (a>b){a=b; return true;} return false;
}
template<class T1,class T2> inline bool chmax(T1 &a,T2 b){
    if (a<b){a=b; return true;} return false;
}
#pragma endregion

int D,M,now=0;
int c[26],s[365][26],t[365],last[26];
set<int> days[26];

void init(){
    for (int i=0;i<26;++i){
        days[i].emplace(-1);
        days[i].emplace(D);
        last[i]=-1;
    }
    for (int i=0;i<D;++i){
        now+=s[i][t[i]]; last[t[i]]=i; days[t[i]].emplace(i);
        for (int j=0;j<26;++j) now-=c[j]*(i-last[j]);
        cout << now << '\n';
    }
}

int calc(int d,int q){
    int pre,nxt,old,res=now;
    old=t[d];
    auto itr1=days[old].lower_bound(d);
    pre=*(--itr1); ++itr1; nxt=*(++itr1);
    res-=c[old]*(d-pre)*(nxt-d)+s[d][old];
    auto itr2=days[q].upper_bound(d);
    nxt=*itr2; pre=*(--itr2);
    res+=c[q]*(d-pre)*(nxt-d)+s[d][q];
    return res;
}

void change(int d,int q){
    now=calc(d,q);
    int old=t[d];
    days[old].erase(days[old].find(d));
    days[q].emplace(d); t[d]=q;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> D;
    for (int i=0;i<26;++i) cin >> c[i];
    for (int i=0;i<D;++i){
        for (int j=0;j<26;++j){
            cin >> s[i][j];
        }
    }
    for (int i=0;i<D;++i) cin >> t[i],--t[i];
    init();
}