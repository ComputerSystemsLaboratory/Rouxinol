#define _CRT_SECURE_NO_WARNINGS
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

const int MAX_N=50100;
int p[(MAX_N+1)/2];
bool isp[MAX_N+1];

int gen_ps(){
    memset(isp,1,sizeof(isp));
    isp[0]=isp[1]=false;
    int idx=0;
    loop(i,2,MAX_N+1){
        if(!isp[i]) continue;
        p[idx++]=i;
        for(int j=i+i; j<=MAX_N; j+=i){
            isp[j]=false;
        }
    }
    return idx;
}

int main(){
    ll a,b;
    while(cin>>a>>b && a){
        ll g = __gcd(a,b);
        cout << g << " " << a/g*b << endl;
    }
}