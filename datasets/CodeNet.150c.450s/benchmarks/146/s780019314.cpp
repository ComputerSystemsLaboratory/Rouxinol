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

// ll stoll(string const& s){
//     ll res = 0;
//     rep(i,s.size()){
//         res*=10;
//         res+=s[i]-'0';
//     }
//     return res;
// }

ll input(){
    string s; cin>>s;
    size_t p=0;
    int sign = s[0]=='-' ? -1 : 1;
    if(sign==-1) s.erase(s.begin());
    while(p<s.size() && s[p]!='.') p++;
    while(s.size()-p < 6) s += '0';
    s.erase(s.begin()+p);
    dump(s);
    return sign*stoll(s);
}

int main(){
    int n; cin>>n;
    rep(_,n){
        ll x[2][2], y[2][2];
        rep(i,2){
            rep(j,2){
                x[i][j] = input();
                y[i][j] = input();
            }
        }
        ll dx1=x[0][0]-x[0][1], dy1=y[0][0]-y[0][1];
        ll dx2=x[1][0]-x[1][1], dy2=y[1][0]-y[1][1];
        dump(dx1,dx2,dy1,dy2);
        puts(dx1*dy2==dx2*dy1 ? "YES" : "NO");
    }
}