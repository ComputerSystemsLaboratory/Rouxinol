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
#define mod 998244353
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
int go[25][61][61];
int back[25][61][61];
//----------------------------------------------------------------------
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    //-------------------------------  
    //ll begin_time=clock();
    //-------------------------------
    int n;cin>>n;
    while(n){

        memset(go,0,sizeof(go));
        memset(back,0,sizeof(back));
        for(int i=0;i<n;i++){
            string s1,s2;cin>>s1>>s2;
            string a=s1.substr(0,2);
            string b=s1.substr(3,2);
            string c=s1.substr(6,2);
            go[stoi(a)][stoi(b)][stoi(c)]++;
            string aa=s2.substr(0,2);
            string bb=s2.substr(3,2);
            string cc=s2.substr(6,2);
            back[stoi(aa)][stoi(bb)][stoi(cc)]++;
        }
        int ans=1;int wehave=1;
        for(int i=0;i<24;i++){
            for(int j=0;j<60;j++){
                for(int k=0;k<60;k++){
                    if(back[i][j][k]){
                        wehave+=back[i][j][k];
                    }
                    if(go[i][j][k]){
                        if(go[i][j][k]>wehave){
                            ans+=go[i][j][k]-wehave;
                            wehave=0;
                        }
                        else{
                            wehave-=go[i][j][k];
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
        cin>>n;
    }
    //-------------------------------  
    //ll end_time=clock();cout<<"time="<<end_time-begin_time<<"ms"<<endl;
    //-------------------------------
    return 0;
}
//----------------------------------------------------------------------



























