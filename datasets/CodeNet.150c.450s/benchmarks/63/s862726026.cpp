#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <limits>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <iterator>
#include <queue>
#include <stack>
#include <vector>
#include <utility>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define all(v) begin(v), end(v)
#define debug(x) cerr << #x << ": " << x << endl
#define debug2(x,y) cerr << #x << ": " << x << ", " << #y << ": " << y << endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
template<class T> using vv=vector< vector<T> >;
typedef deque<int> di;
typedef deque< deque<int> > ddi;

#define INF 2000000000

int main() {
    cin.tie(0);
    priority_queue<i_i> Q; //cost, to
    int V, E, r;
    vector<i_i> VP[100005]; //cost, to  
    int cost[100005];
    set<int> S;
    cin >> V >> E >> r;

    rep(i,E) {
        int s, t, c;
        scanf("%d%d%d", &s,&t,&c);
        VP[s].pb(mp(-1 * c,t));
    }

/*
    rep(i,V) {
        rep(j,VP[i].size()){
            debug2(VP[i][j].first, VP[i][j].second);
        }
    }
*/

    Q.push(mp(0,r));

    while(!Q.empty()) {
        if(Q.empty()) {
            break;
        }
        i_i q = Q.top();
        Q.pop();
        if(S.find(q.second) != S.end()) {
            continue;
        }
        cost[q.second] = q.first;
        
        S.insert(q.second);
        rep(i,VP[q.second].size()) {
            Q.push(mp(q.first + VP[q.second][i].first, VP[q.second][i].second));
        }
    }

    rep(i,V) {
        if(r == i || (cost[i] > -INF && cost[i] != 0)) {
            printf("%d\n",-1 * cost[i]); 
        } else {
            printf("INF\n");
        }
    }

	return 0;
}