#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
#include<math.h>
#include<utility>
#include<map>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define REPR(i,n) for(int i=n-1;i>=0;i--)
#define FORR(i,n,m) for(int i=n-1;i>=m;i--)
#define all(in) in.begin(),in.end()
#define ALL(in,K) in,in+K
#define INF 100000000
#define MOD 100000007
#define SIZE 100005
#define PI 	3.14159265358979323846

ll sum(ll x,ll y,ll* num){
    if(x==num[1] && y==num[2]){return num[0];}
    if(x==num[2] && y==num[4]){return num[0];}
    if(x==num[4] && y==num[3]){return num[0];}
    if(x==num[3] && y==num[1]){return num[0];}
    if(x==num[5] && y==num[2]){return num[1];}
    if(x==num[2] && y==num[0]){return num[1];}
    if(x==num[0] && y==num[3]){return num[1];}
    if(x==num[3] && y==num[5]){return num[1];}
    if(x==num[1] && y==num[5]){return num[2];}
    if(x==num[5] && y==num[4]){return num[2];}
    if(x==num[4] && y==num[0]){return num[2];}
    if(x==num[0] && y==num[1]){return num[2];}
    if(x==num[1] && y==num[0]){return num[3];}
    if(x==num[0] && y==num[4]){return num[3];}
    if(x==num[4] && y==num[5]){return num[3];}
    if(x==num[5] && y==num[1]){return num[3];}
    if(x==num[2] && y==num[5]){return num[4];}
    if(x==num[5] && y==num[3]){return num[4];}
    if(x==num[3] && y==num[0]){return num[4];}
    if(x==num[0] && y==num[2]){return num[4];}
    if(x==num[4] && y==num[2]){return num[5];}
    if(x==num[2] && y==num[1]){return num[5];}
    if(x==num[1] && y==num[3]){return num[5];}
    if(x==num[3] && y==num[4]){return num[5];}
    return 0;
}

int main(){
    ll num[6];
    REP(i,6){
        cin >> num[i];
    }

    ll n;
    cin >> n;

    REP(i,n){
        ll x,y;
        cin >> x >> y;
        cout << sum(x,y,num) << endl;
    }
    return 0;
}
