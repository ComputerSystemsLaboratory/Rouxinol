#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <sstream>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(ll i=a; i<ll(b); i++)
#define rep(i,b) loop(i,0,b)
#ifdef DEBUG
#define dump(...) (cerr<<#__VA_ARGS__<<" = "<<(DUMP(),__VA_ARGS__).str()<<" ["<<__LINE__<<"]"<<endl)
struct DUMP:ostringstream{template<class T>DUMP &operator,(const T&t){if(this->tellp())*this<<", ";*this<<t;return *this;}};
#else
#define dump(...)
#endif

ll cross(ll a, ll b, ll c, ll d) {
    return a*d - b*c;
}

int main() {
    ll a[6];
    while(cin) {
        rep(i,6) cin>>a[i];
        if(!cin) break;
        ll d =  cross(a[0], a[1], a[3], a[4]);
        ll x1 = cross(a[2], a[1], a[5], a[4]);
        ll x2 = cross(a[0], a[2], a[3], a[5]);
        cout << setprecision(3) << fixed;
        cout << 1. * x1 / d + 1e-9 << " ";
        cout << 1. * x2 / d + 1e-9 << endl;
    }
}