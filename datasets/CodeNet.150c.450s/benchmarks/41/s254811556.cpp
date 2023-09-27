/*  "A quote? by me? hell no!"  */
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <iomanip>
#include <set>
#include <string>
#include <fstream>
#define F first
#define S second
#define ll long long
#define int ll
#define fast() ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define per() cout<<fixed<<setprecision(12)
#define pb push_back
#define FOR(i,a,b) for(int i=a;((a<b)?(i<=b):(i>=b));((a<b)?(i++):(i--)))
//#define endl '\n'
//#define cin in
//#define cout out

using namespace std;
const int MAX_N = 1e2+10;
const int INF = 1e12+10;
const ll mod = 1e18;
ofstream out("output.txt");
ifstream in("intput.txt");
typedef pair<int,int> pii;
int bpow(int t,int n){int ans=1;while(n>0){if(n&1)ans=(ans*t)%mod;t=(t*t)%mod,n>>=1;}return ans;}

int from[MAX_N*100],to[MAX_N*100],w[MAX_N*100];
int n,m;
int d[MAX_N][MAX_N];
bool relax(int e,int s){
    if(d[s][to[e]]>d[s][from[e]]+w[e]&&d[s][from[e]]!=INF){
        d[s][to[e]]=d[s][from[e]]+w[e];
        return true;
    }
    return false;
}
bool ok=true;
void bellman(int s){
    fill(d[s],d[s]+MAX_N,INF);
    d[s][s]=0;
    for(int i=0;i<n-1;i++)
        for(int e=0;e<m;e++)
            relax(e,s);
    for(int e=0;e<m;e++)
        if(relax(e,s))
            ok=false;
}
int32_t main(){
    fast();per();
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>from[i]>>to[i]>>w[i];
    for(int i=0;i<n;i++)
        bellman(i);
    if(!ok)
        return cout<<"NEGATIVE CYCLE\n",0;
    for(int v=0;v<n;v++,cout<<'\n')
        for(int u=0;u<n;u++){
            if(d[v][u]!=INF)
                cout<<d[v][u];
            else
                cout<<"INF";
            if(u!=n-1)
                cout<<" ";
        }
}