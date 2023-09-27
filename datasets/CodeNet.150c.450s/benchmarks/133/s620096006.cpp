#ifdef LOCAL
    #define _GLIBCXX_DEBUG
    #define __clock__
#else
    #pragma GCC optimize("Ofast")
#endif
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
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
#define SZ(x) ((int)(x).size())
#define SORT(A) sort(ALL(A))
#define RSORT(A) sort(ALL(A), greater<ll>())
#define MP make_pair
#define p_yes() p("Yes")
#define p_no() p("No")

ll SUM(VI& V){
  return accumulate(ALL(V), 0LL);
}

ll MIN(VI& V){return *min_element(ALL(V));}
ll MAX(VI& V){return *max_element(ALL(V));}

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

// long double
using ld = long double;
#define EPS (1e-14)
#define equals(a,b) (fabs((a)-(b)) < EPS)

void no(){p_no(); exit(0);}
void yes(){p_yes(); exit(0);}

const ll mod = 1e9 + 7;
const ll inf = 1e18;
const double PI = acos(-1);

// for codeforces
void solve(){
  ll a;
  cin>>a;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    ll D;cin>>D;
    VI C(26);
    rep(i,26){
      cin>>C[i];
    }

    VV S(D, VI(26));
    rep(i,D){
      rep(j,26){
        cin>>S[i][j];
      }
    }
    VI T(D);
    rep(i,D)cin>>T[i];

    auto calc_score = [&](){
      ll sum=0;
      VI last(26, -1);
      VI ret(D);

      // i日目
      rep(i,D){
        ll id = T[i]-1; // id番目のコンテストを選んだ
        sum += S[i][id];

        last[id] = i;

        debug(i,sum);
        debug(SUM(C));

        // 満足度の低下
        rep(j,26){
          sum -= C[j] * (i+1-last[j]-1);
          // if(last[j]==-1){
          //   debug(j);
          //   sum -= C[j] * (i+1);
          // }else{
          //   debug(j, "a");
          // }
          debug(sum);
        }
        ret[i] = sum;
      }
      return ret;
    };

    auto Ans = calc_score();
    for(ll v : Ans){
      p(v);
    }
    return 0;
}