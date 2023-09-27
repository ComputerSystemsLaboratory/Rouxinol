#include <bits/stdc++.h>
using namespace std;
#define int long long
#define stoi stoll
using ll=long long;
using vi=vector<int>;
using pii=pair<int,int>;
#define ALL(c) begin(c),end(c)
#define RALL(c) rbegin(c),rend(c)
#define ITR(i,b,e) for(auto i=(b);i!=(e);++i)
#define FORE(x,c) for(auto &x:c)
#define REPF(i,a,n) for(int i=a,i##len=(int)(n);i<i##len;++i)
#define REP(i,n) REPF(i,0,n)
#define REPR(i,n) for(int i=(int)(n);i>=0;--i)
#define SZ(c) ((int)c.size())
#define CONTAIN(c,x) (c.find(x)!=end(c))
#define OUTOFRANGE(y,x,h,w) ((y)<0||(x)<0||(y)>=(h)||(x)>=(w))
#define dump(...)
const signed INF_=1001001001; const ll INF=1001001001001001001LL;
const int DX[9]={0,1,0,-1,1,1,-1,-1,0},DY[9]={-1,0,1,0,-1,1,1,-1,0};
template<class T> ostream& operator<<(ostream &os,const vector<T> &v) {
    ITR(i,begin(v),end(v))os<<*i<<(i==end(v)-1?"":" ");return os;}
template<class T> istream& operator>>(istream &is,vector<T> &v) {
    ITR(i,begin(v),end(v)) is>>*i;return is;}
template<class T,class U> istream& operator>>(istream &is, pair<T,U> &p) {
    is>>p.first>>p.second;return is;}
template<class T> bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T> bool chmin(T &a,const T &b){if(a>b){a=b;return 1;}return 0;}
template<class T> using heap=priority_queue<T,vector<T>,greater<T>>;
struct{template<class T> operator T(){T x;cin>>x;return x;}} IN;
struct before_main_function {
    before_main_function() {
        cin.tie(0);ios::sync_with_stdio(false);
        cout<<setprecision(15)<<fixed;
        #define endl "\n"
    }
} before_main_function;
//------------------8<------------------------------------8<--------------------

// 1-indexed
struct BIT {
    vector<int> data;
    int size;
    BIT(int n): size(n), data(n, 0) {}
    void add(int i, int x) {
        while (i <= size) {
            data[i] += x;
            i += i & -i;
        }
    }
    int sum(int i) {
        int ret = 0;
        while (i > 0) {
            ret += data[i];
            i -= i & -i;
        }
        return ret;
    }
};
signed main() {
    BIT bit(1e5+1);
    int n=IN,q=IN;
    while(q--) {
        int com,x,y;
        cin>>com>>x>>y;
        if(com==0) {
            bit.add(x,y);
        } else {
            int t=bit.sum(y);
            if(x>1) t-=bit.sum(x-1);
            cout<<t<<endl;
        }
    }
    return 0;
}

