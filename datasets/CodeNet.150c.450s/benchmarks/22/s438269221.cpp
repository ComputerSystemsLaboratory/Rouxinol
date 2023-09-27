#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stdio.h>
#include <queue>
#include <stack>
#include <climits>
#include <map>
#include <set>

const int mod = 1e9 + 7;
const int inf = 1e9;
const long long INF = 1LL << 60;
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
using namespace std;

struct edge {int from,to,cost;};

int main()
{
    int v,e,r;
    cin >> v >> e >> r;

    edge es[e];

    for(int i = 0; i < e; i++){
        int s,t,c;
        cin >> s >> t >> c;
        es[i].from = s;
        es[i].to = t;
        es[i].cost = c;
    }

    int d[v];
    for(int i = 0; i < v; i++){
        d[i] = inf;
    }
    d[r] = 0;
    
    for(int i = 0; i < v; i++){
        bool update = false;
        for(int j = 0; j < e; j++){
            edge e = es[j];
            if(d[e.from] != inf && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }

        if(!update) break;

        if(i == v-1 && update){
            cout << "NEGATIVE CYCLE" << endl;
            return 0;
        }
    }

    for(int i = 0; i < v; i++){
        if(d[i] == inf){
            cout << "INF" << endl;
        }else{
            cout << d[i] << endl;
        }
    }
}
