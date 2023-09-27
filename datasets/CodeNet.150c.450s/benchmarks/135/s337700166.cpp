#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <complex>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-9
#define INF 2000000000
#define sz(x) ((int)(x).size())
#define fi first
#define sec second
#define SORT(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
int N,M;
int x[100100];
int y[100100];
int solve(){
    scanf("%d %d",&N,&M);
    if(N==0&&M==0)return 1;
    for(int i=1;i<=N;i++)scanf("%d",&x[i]);
    for(int i=1;i<=M;i++)scanf("%d",&y[i]);
    for(int i=1;i<=N;i++)x[i]+=x[i-1];
    for(int i=1;i<=M;i++)y[i]+=y[i-1];
    vector<int> vx,vy;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<=N;j++){
            vx.pb(x[j]-x[i]);
        }
    }
    for(int i=0;i<M;i++){
        for(int j=i+1;j<=M;j++){
            vy.pb(y[j]-y[i]);
        }
    }
    sort(all(vx));
    int ans = 0;
    for(int i=0;i<vy.size();i++){
        ans += upper_bound(all(vx),vy[i])-lower_bound(all(vx),vy[i]);
    }
    printf("%d\n",ans);
    return 0;
}
int main(){
    while(1){
        if(solve())return 0;
    }
    return 0;
}