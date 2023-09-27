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
int n;
int x[100100],y[100100];
int r,l,b,t;
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int solve(){
    r = t = 0;
    l = b = 0;
    scanf("%d",&n);
    if(n==0)return 1;
    for(int i=1;i<n;i++){
        int m,d;
        scanf("%d %d",&m,&d);
        x[i]=x[m]+dx[d];
        y[i]=y[m]+dy[d];
        r = max(r,x[i]);
        l = min(l,x[i]);
        b = min(b,y[i]);
        t = max(t,y[i]);
    }
    printf("%d %d\n",r-l+1,t-b+1);
    return 0;
}
int main(){
    while(1){
        if(solve())return 0;
    }
    return 0;
}