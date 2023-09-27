#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <utility>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(ll i=a; i<ll(b); i++)
#define rep(i,b) loop(i,0,b)
#define each(e,c) for(auto&e:c)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define lb lower_bound
#define ub upper_bound
#ifdef DEBUG
#define dump(...) (cerr<<#__VA_ARGS__<<" = "<<(DUMP(),__VA_ARGS__).str()<<" ["<<__LINE__<<"]"<<endl)
struct DUMP:ostringstream{template<class T>DUMP &operator,(const T&t){if(this->tellp())*this<<", ";*this<<t;return *this;}};
#else
#define dump(...)
#endif
template<class T> ostream& operator<<(ostream& os, vector<T> const& v){
    rep(i,v.size()) os << v[i] << (i+1==v.size()?"":" ");
    return os;
}

int main(){
    int n; cin >> n;
    while(n--){
        int v[10];
        rep(i,10) cin >> v[i];
        bool ok = false;
        rep(mask,1<<10){
            int a=-1, b=-1;
            bool f = true;
            rep(i,10){
                if(mask>>i & 1){
                    if(a==-1 || a < v[i]) a = v[i];
                    else f = false;
                } else {
                    if(b==-1 || b < v[i]) b = v[i];
                    else f = false;
                }
            }
            if(f){
                ok = true;
                break;
            }
        }
        puts(ok ? "YES" : "NO");
    }
}