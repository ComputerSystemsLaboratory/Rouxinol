#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <fstream>
#include <functional>
#include <bitset>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;
const double pi=acos(-1);
const double eps=1e-10;

int dx[]={1, 0, -1, 0};
int dy[]={0, -1, 0, 1};

const int MAX_V = 1010;

vector<T> edge;
vector<ll> d1(MAX_V), d2(MAX_V);
int v, e;

void bellman_ford1(int s){
    for(int i=0; i<v; i++) d1[i] = INF;
    d1[s] = 0;
    
    for(int i=0; i<v; i++){
        for(int j=0; j<e; j++){
            int cv, nv, cost;
            tie(cv, nv, cost) = edge[j];

            if(d1[cv] != INF && d1[nv] > d1[cv] + cost){
                d1[nv] = d1[cv] + cost;
            }
        }
    }
}

void bellman_ford2(){
    for(int i=0; i<v; i++) d2[i] = d1[i];
    
    for(int i=0; i<v; i++){
        for(int j=0; j<e; j++){
            int cv, nv, cost;
            tie(cv, nv, cost) = edge[j];

            if(d2[cv] != INF && d2[nv] > d2[cv] + cost){
                d2[nv] = d2[cv] + cost;
            }
        }
    }
}

int main(){
    int r; cin>>v>>e>>r;
    for(int i=0; i<e; i++){
        int s, t, d; cin>>s>>t>>d;
        edge.eb(T(s, t, d));
    }

    bellman_ford1(r);
    bellman_ford2();

    bool negative = false;
    for(int i=0; i<v; i++){
        if(d1[i] != d2[i]){
            negative = true;
        }
    }

    if(negative){
        cout << "NEGATIVE CYCLE" << endl;
    }
    else{
        for(int i=0; i<v; i++){
            if(d1[i] == INF) cout << "INF" << endl;
            else cout << d1[i] << endl;
        }
    }
}
