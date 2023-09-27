#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
#define rrep(i,n) for(int (i)=((n)-1);(i)>=0;(i)--)
#define itn int
#define miele(v) min_element(v.begin(), v.end())
#define maele(v) max_element(v.begin(), v.end())
#define SUM(v) accumulate(v.begin(), v.end(), 0LL)
#define lb(a, key) lower_bound(a.begin(),a.end(),key)
#define ub(a, key) upper_bound(a.begin(),a.end(),key)
#define COUNT(a, key) count(a.begin(), a.end(), key) 
#define BITCOUNT(x) __builtin_popcount(x)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
using P = pair <int,int>;
using WeightedGraph = vector<vector <P>>;
using UnWeightedGraph = vector<vector<int>>;
using Real = long double;
using Point = complex<Real>; //Point and Vector2d is the same!
using Vector2d = complex<Real>;
const long long INF = 1LL << 60;
const int MOD = 1000000007;
const double EPS = 1e-15;
const double PI=3.14159265358979323846;
template <typename T> 
int getIndexOfLowerBound(vector <T> &v, T x){
    return lower_bound(v.begin(),v.end(),x)-v.begin();
}
template <typename T> 
int getIndexOfUpperBound(vector <T> &v, T x){
    return upper_bound(v.begin(),v.end(),x)-v.begin();
}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
#define DUMPOUT cerr
#define repi(itr, ds) for (auto itr = ds.begin(); itr != ds.end(); itr++)
istream &operator>>(istream &is, Point &p) {
    Real a, b; is >> a >> b; p = Point(a, b); return is;
}
template <typename T, typename U>
istream &operator>>(istream &is, pair<T,U> &p_var) {
    is >> p_var.first >> p_var.second;
    return is;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &vec) {
    for (T &x : vec) is >> x;
    return is;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> &pair_var) {
    DUMPOUT<<'{';
    os << pair_var.first;
    DUMPOUT<<',';
    os << " "<< pair_var.second;
    DUMPOUT<<'}';
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec) {
    DUMPOUT<<'[';
    for (int i = 0; i < vec.size(); i++) 
    os << vec[i] << (i + 1 == vec.size() ? "" : " ");
    DUMPOUT<<']';
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, vector<vector<T>> &df) {
  for (auto& vec : df) os<<vec;
  return os;
}
template <typename T, typename U>
ostream &operator<<(ostream &os, map<T, U> &map_var) {
    DUMPOUT << "{";
    repi(itr, map_var) {
        os << *itr;
        itr++;
        if (itr != map_var.end()) DUMPOUT << ", ";
        itr--;
    }
    DUMPOUT << "}";
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, set<T> &set_var) {
    DUMPOUT << "{";
    repi(itr, set_var) {
        os << *itr;
        itr++;
        if (itr != set_var.end()) DUMPOUT << ", ";
        itr--;
    }
    DUMPOUT << "}";
    return os;
}
void print() {cout << endl;}
template <class Head, class... Tail>
void print(Head&& head, Tail&&... tail) {
  cout << head;
  if (sizeof...(tail) != 0) cout << " ";
  print(forward<Tail>(tail)...);
}
void dump_func() {DUMPOUT << '#'<<endl;}
template <typename Head, typename... Tail>
void dump_func(Head &&head, Tail &&... tail) {
    DUMPOUT << head;
    if (sizeof...(Tail) > 0) DUMPOUT << ", ";
    dump_func(std::move(tail)...);
}
#ifdef DEBUG_
#define DEB
#define dump(...)                                                              \
    DUMPOUT << "  " << string(#__VA_ARGS__) << ": "                            \
            << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]"        \
            << endl                                                            \
            << "    ",                                                         \
        dump_func(__VA_ARGS__)
#else
#define DEB if (false)
#define dump(...)
#endif

vector <vector<int>> dp(1010,vector <int>(1010,INF));
string s, t;
int Levenshtein(int i, int j){
    if(i < 0 && j >= 0) return j+1;
    else if(i >= 0 && j < 0) return i+1;
    else if(i < 0 && j < 0) return 0;
    if(dp[i][j] != INF) return dp[i][j];
    if(s[i] == t[j]) dp[i][j] = Levenshtein(i-1, j-1);
    else {
        chmin(dp[i][j], Levenshtein(i-1, j-1) + 1);
        chmin(dp[i][j], Levenshtein(i-1, j) + 1);
        chmin(dp[i][j], Levenshtein(i, j-1) + 1);
    }
    return dp[i][j];
}
signed main(void) { cin.tie(0); ios::sync_with_stdio(false);
    cin>>s>>t;
    print(Levenshtein(s.size()-1, t.size()-1));
}

