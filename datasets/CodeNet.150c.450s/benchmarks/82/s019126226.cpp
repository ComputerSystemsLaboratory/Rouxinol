#pragma GCC optimize ("O3")
#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <utility>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#define IINF 10e8
#define INF 1<<30
#define MOD 1000000007
#define mod 10007
#define REP(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define REPE(i, a, n) for (ll i = a; i <= (ll)(n); i++)
#define Endl endl
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define mmax(x,y)(x>y?x:y)
#define mmin(x,y)(x<y?x:y)
#define chmax(x,y) x=mmax(x,y)
#define chmin(x,y) x=mmin(x,y)
#define all(x) (x).begin(),(x).end()
#define siz(x) (ll)(x).size()
#define PI acos(-1.0)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int,int>Pin;
typedef pair<ll,ll>Pll;
template<class T> using V=vector<T>;
long long GCD(long long a, long long b) {return b?GCD(b,a%b):a;}
long long LCM(long long a, long long b) {return a/GCD(a,b)*b;}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int ddx[8]={-1,0,1,0,1,1,-1,-1};
int ddy[8]={0,-1,0,1,1,-1,1,-1};
ll cmp(pair<ll,ll>a,pair<ll,ll> b){
        if(a.se!=b.se)
        return a.se<b.se;
        else
        return a.fi<b.fi;
}
//----------------------------------------------------------------------
struct Dice{
    int U, D, N, E, S, W, temp;

    Dice (int u, int s, int e, int w, int n, int d) {
        U = u; S = s; E = e; W = w; N = n; D = d;
    }

    void turnN () {
        temp = D;
        D = N; N = U; U = S; S = temp;
    }
    void turnE () {
        temp = W;
        W = D; D = E; E = U; U = temp;
    }
    void turnS () {
        temp = D;
        D = S; S = U; U = N; N = temp;
    }
    void turnW () {
        temp = W;
        W = U; U = E; E = D; D = temp;
    }
    void turnRight () {
        temp = W;
        W = S; S = E; E = N; N = temp;
    }
    void turnLeft () {
        temp = W;
        W = N; N = E; E = S; S = temp;
    }
};
//----------------------------------------------------------------------
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    //-------------------------------  
    //ll begin_time=clock();
    //------------------------------
    V<int>a(6);
    for(int i=0;i<6;i++)cin>>a[i];
    Dice d =Dice(a[0],a[1],a[2],a[3],a[4],a[5]);

    int n;cin>>n;
    for(int i=0;i<n;i++){
        int up,front;cin>>up>>front;
        while(d.U!=up){
            d.turnW();
            if(d.U==up)break;
            d.turnW();
            if(d.U==up)break;
            d.turnW();
            if(d.U==up)break;
            d.turnW();
            if(d.U==up)break;
            d.turnS();
            if(d.U==up)break;
            d.turnS();
        }
        while(d.S!=front)d.turnLeft();
        cout<<d.E<<endl;
    }
    //-------------------------------  
    //ll end_time=clock();cout<<"time="<<end_time-begin_time<<"ms"<<endl;
    //-------------------------------
    return 0;
}
//----------------------------------------------------------------------












































