#include <bits/stdc++.h>
using namespace std;

#define ris   return *this
#define tmplt template<class T
#define dbgo  debug& operator<<
tmplt > struct rge { T b, e; };
tmplt > rge<T> range(T i, T j) { return rge<T>{i, j}; }
struct debug {
#ifdef LOCAL
~debug(){cerr<<endl;}
tmplt > dbgo(T x){cerr<<boolalpha<<x;ris;}
tmplt, class C > dbgo(pair<T, C> x){ris<<"("<<x.first<<", "<<x.second<<")";}
tmplt > dbgo(rge<T> x){*this<<"[";for(auto it=x.b;it!=x.e;it++){*this<<", "+2*(it==x.b)<<*it;}ris<<"]";}
tmplt > dbgo(vector<T> x){ris<<range(x.begin(),x.end());}
#else
tmplt > dbgo(const T&){ris;}
#endif
};
#define nav(...) << "[ " << #__VA_ARGS__ ": " << (__VA_ARGS__) << " ] "
using ll = long long;

#define forn(i, n) for(int i = 0; i < int(n); i++)
#define ford(i, n) for(int i = n-1; i >= 0; i--) 

template<typename T> 
void min_self(T& a, T b) { 
   a = min(a, b); 
}
template<typename T>
void max_self(T& a, T b) { 
   a = max(a, b); 
}

void test_case() {
   int n;
   cin >> n;
   vector<ll> a(n);
   for(int i = 0; i < n; i++) {
      cin >> a[i];
   }
   string s;
   cin >> s;
   vector<ll> basis;
   for(int i = n-1; i >= 0; --i) {
      ll x = a[i];
      
      for(ll y : basis) {
         x = min(x, x^y);
      }
      if(x == 0) {
         continue;
      }
      if(s[i] == '0') {
         basis.push_back(x);
      } else {
         cout << "1\n";
         return;
      }
   }
   cout << "0\n";
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   
   int tc;
   cin >> tc;
   while(tc--) {
      test_case();
   }
}















// Author: blondie
