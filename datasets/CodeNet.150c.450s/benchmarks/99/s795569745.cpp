#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;

#define TT template<typename T>
#define ET(T) typename T::value_type
TT inline T sq(T x){return x*x;}
TT inline T In(){T x;cin>>x;return x;}
TT inline int ubnd(T&v,ET(T) x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT inline int lbnd(T&v,ET(T) x){return lower_bound(begin(v),end(v),x)-begin(v);}
TT inline void sort(T&v){sort(begin(v),end(v));}
TT inline void revs(T&v){reverse(begin(v),end(v));}
TT inline void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT inline void inpt(T&v,int n,function<ET(T)()>f=In<ET(T)>){for(v.reserve(n);n--;v.emplace_back(f()));}
TT inline void show(T&v,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),cout<<x;cout<<e;}
#undef TT
#undef ET

inline void fast_io(){ios::sync_with_stdio(0); cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline string instr(){string x;cin>>x;return x;}
inline ll pow_mod(ll a, ll k, ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a, ll p){return pow_mod(a,p-2,p);}

const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000;

int mcxi_to_int(const string& s)
{
  int table[256] = {};
  table['m'] = 1000;
  table['c'] = 100;
  table['x'] = 10;
  table['i'] = 1;
  int v = 1;
  int r = 0;
  for (const auto& c : s){
    if (isdigit(c)) v = c - '0';
    else {
      r += table[c] * v;
      v = 1;
    }
  }
  return r;
}

string int_to_mcxi(int x)
{
  stringstream ss;
  for (int i = 0; x > 0; i++){
    int v = x % 10;
    if (v){
      ss << "ixcm"[i];
      if (v != 1){
        ss << v;
      }
    }
    x /= 10;
  }
  string s = ss.str();
  revs(s);
  return s;
}

int main()
{
  int n = in();
  for (int i = 0; i < n; i++){
    string a, b;
    cin >> a >> b;
    cout << int_to_mcxi(mcxi_to_int(a) + mcxi_to_int(b)) << endl;
  }

  return (0);
}

// priority_queue queue deque front top push pop map set stringstream max_element min_element insert count find get tie make_tuple