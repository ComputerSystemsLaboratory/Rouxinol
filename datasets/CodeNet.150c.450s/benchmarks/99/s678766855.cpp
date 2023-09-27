#ifdef LOCAL
    #define _GLIBCXX_DEBUG
    #define __clock__
#else
    #pragma GCC optimize("Ofast")
#endif
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<ll>;
using VV = vector<VI>;
using VS = vector<string>;
using PII = pair<ll, ll>;

// tourist set
template <typename A, typename B>
string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string& s) {
  return '"' + s + '"';
}

string to_string(const char* s) {
  return to_string((string) s);
}

string to_string(bool b) {
  return (b ? "true" : "false");
}

string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}

template <size_t N>
string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}

template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

template <typename A, typename B>
string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ", " + to_string(get<3>(p)) + ")";
}

void debug_out() { cerr << '\n'; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif
// tourist set end

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i,b) FOR(i, 0, b)
#define ALL(v) (v).begin(), (v).end()
#define p(s) cout<<(s)<<'\n'
#define p2(s, t) cout << (s) << " " << (t) << '\n'
#define br() p("")
#define pn(s) cout << (#s) << " " << (s) << '\n'
#define p_yes() p("YES")
#define p_no() p("NO")
#define SZ(x) ((int)(x).size())
#define SORT(A) sort(ALL(A))
#define RSORT(A) sort(ALL(A), greater<ll>())
#define MP make_pair

ll SUM(VI& V){
  return accumulate(ALL(V), 0LL);
}

void print_vector(VI& V){
  ll n = V.size();
  rep(i, n){
    if(i) cout << ' ';
    cout << V[i];
  }
  cout << endl;
}

ll gcd(ll a,ll b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    ll g = gcd(a,b);
    return a / g * b;
}

void no(){p_no(); exit(0);}
void yes(){p_yes(); exit(0);}

const ll mod = 1e9 + 7;
const ll inf = 1e18;
const double PI = acos(-1);

// m c x i

string g(ll v){
  // value to string
  stringstream ss;
  
  ll a = v/1000;
  if(a==1){
    ss << 'm';
  }else if(a>1){
    ss<<a<<'m';
  }
  v %= 1000;

  a = v/100;  
  if(a==1){
    ss << 'c';
  }else if(a>1){
    ss<<a<<'c';
  }
  v %= 100;

  a = v/10;  
  if(a==1){
    ss << 'x';
  }else if(a>1){
    ss<<a<<'x';
  }
  v %= 10;

  a = v/1;  
  if(a==1){
    ss << 'i';
  }else if(a>1){
    ss<<a<<'i';
  }
  v %= 1;

  return ss.str();
}

bool is_num(char c){
  ll v = c-'0';
  if(0<=v && v<10){
    return true;
  }else{
    return false;
  }
}

ll ctoi(char c){
  return c-'0';
}

ll mcxi_to_value(char c){
  if(c=='m') return 1000;
  if(c=='c') return 100;
  if(c=='x') return 10;
  if(c=='i') return 1;
}

// string to value
ll f(string s){
  // rep(v, 10000){
  //   if(g(v)==s) return v;
  // }

  ll L = s.size();
  ll ret=0;
  ll c = 1; // co eff
  rep(i, L){
    if(is_num(s[i])){
      c = ctoi(s[i]);
    }else{
      // 文字が来ている
      ret += c*mcxi_to_value(s[i]);
      c = 1;
    }
  }  
  return ret;
}



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // debug(f("xi"));
    // debug(f("x9i"));


    // input
    ll T;cin>>T;
    while(T--){
      string a,b;cin>>a>>b;
      ll v = f(a);
      ll w = f(b);
      ll x = v+w;
      string s = g(x);
      p(s);
    }

    return 0;
}
