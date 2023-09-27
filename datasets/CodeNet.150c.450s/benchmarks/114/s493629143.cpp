#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define all(v) begin(v), end(v)
using namespace std;
typedef pair<int,int> PII;

int P[100]; //union_find

int root(int i){
    if(P[i] == i) return i;
    else return P[i] = root(P[i]);
}

bool same(int x, int y){
    return root(P[x]) == root(P[y]);
}

void unite(int x, int y){
    P[root(x)] = root(y);
}

int main(){
    int n;
    cin >> n;
    int g[n][n];
    vector<pair<int,PII>> V;
    REP(i,n){
        REP(j,n){
            cin >> g[i][j];
            if(i<j && g[i][j] >= 0) V.pb(mp(g[i][j],mp(i,j)));
        }
    }
    sort(all(V));
    REP(i,n){
        P[i] = i;
    }
    int wsum = 0, count = 0;
    REP(i,n*n){
        int x = V[i].snd.fst;
        int y = V[i].snd.snd;
        if(same(x,y)) continue;
        unite(x,y);
        wsum += V[i].fst;
        count++;
        if(count == n-1) break;
    }

    cout <<wsum<<endl;

    return 0;
}