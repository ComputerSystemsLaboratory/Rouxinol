#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double real;
typedef pair<int, int> duo;

#define TT template<typename T>
TT T    sq(T x){ return x*x; }
TT int  ubnd(vector<T>& v,T x){ return upper_bound(v.begin(), v.end(), x) - v.begin(); }
TT int  lbnd(vector<T>& v,T x){ return lower_bound(v.begin(), v.end(), x) - v.begin(); }
TT void sort(T& v){ sort(v.begin(), v.end()); }
TT void revs(T& v){ reverse(v.begin(), v.end()); }
TT void uniq(T& v){ sort(v); v.erase(unique(v.begin(), v.end()), v.end()); }
TT void show(T& v,char d=' ',char e='\n'){for(int i=0;i<v.size();++i)cout<<v[i]<<((i==v.size()-1)?e:d);}
TT void inpt(vector<T>& v,int n){ v.reserve(n);for(int i=0;i<n;++i){T x; cin>>x; v.push_back(x);} }
TT T In(){ T x; cin >> x; return x; }

static inline void fast_io(){ ios::sync_with_stdio(0); cin.tie(0); }
static inline int in(){ int x; scanf("%d", &x); return x; }
static inline string instr(){ string x; cin >> x; return x; }
static inline ll pow_mod(ll a, ll k, ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
static inline ll mod_inv(ll a, ll p){ return pow_mod(a,p-2,p); }
static const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
static const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
static const int Mod = 1000000000;

int main()
{
  map<string, int> cnt;
  string word;
  while (cin >> word){
    cnt[word]++;
  }
  int freq, length;
  string freq_s, length_s;
  length = freq = -1;
  for (const auto& v : cnt){
    if (freq < v.second){
      freq = v.second;
      freq_s = v.first;
    }
    if (length < (int)v.first.size()){
      length = v.first.size();
      length_s = v.first;
    }
  }
  cout << freq_s << " " << length_s << endl;
  return (0);
}

// priority_queue queue deque first second front top push pop map set stringstream max_element min_element insert count find