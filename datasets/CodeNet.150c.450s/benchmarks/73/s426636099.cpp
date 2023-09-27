#include <bits/stdc++.h>
using namespace std;
#define GET_MACRO(_1, _2, _3, NAME, ...) NAME
#define _repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define _rep(i,n) _repl(i,0,n)
#define rep(...) GET_MACRO(__VA_ARGS__, _repl, _rep)(__VA_ARGS__)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define uniq(x) sort(all(x)),(x).erase(unique(all(x)),end(x))
#define fi first
#define se second
#define dbg(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
void _dbg(string){cout<<endl;}
template<class H,class... T> void _dbg(string s,H h,T... t){int l=s.find(',');cout<<s.substr(0,l)<<" = "<<h<<", ";_dbg(s.substr(l+1),t...);}
template<class T,class U> ostream& operator<<(ostream &o, const pair<T,U> &p){o<<"("<<p.fi<<","<<p.se<<")";return o;}
template<class T> ostream& operator<<(ostream &o, const vector<T> &v){o<<"[";for(T t:v){o<<t<<",";}o<<"]";return o;}

template<typename T>
class SegTree {
public:
  int n;
  T e;
  T (*op)(T, T);
  vector<T> data;
  SegTree(int m, T _e, T (*_op)(T, T)) : e(_e), op(_op){
    n=1;
    while(n<m) n*=2;
    data.resize(2*n, e);
  }
  T query(int l, int r){
    T vl = e, vr = e;
    for(l+=n, r+=n; l<r; l/=2, r/=2){
      if(l&1) vl = op(vl, data[l++]);
      if(r&1) vr = op(data[--r], vr);
    }
    return op(vl,vr);
  }
  void update(int k, T a){
    k+=n;
    data[k]=a;
    while(k>0){
      k = k/2;
      data[k] = op(data[k*2], data[k*2+1]);
    }
  }
  inline T operator[](int idx){ return data[idx+n]; }
};

int main(){
  int n,q;
  cin>>n>>q;

  SegTree<long> st(n, 0, [](const long l, const long r){return l+r;});
  rep(i,q){
    int t,x,y;
    cin>>t>>x>>y;
    if(t==0) st.update(x,st.query(x,x+1) + y);
    else cout << st.query(x,y+1) << "\n";
  }

  return 0;
}