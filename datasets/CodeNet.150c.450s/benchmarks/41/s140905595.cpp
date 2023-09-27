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

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll mod = 1000000007;
const int inf = 1e9;
const long long INF = 1LL << 60;   // INFの値は1152921504606846976

int n;
const int V_MAX = 105;
ll d[V_MAX][V_MAX];

void warshall_floyd(){
    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            if(d[i][k] == INF) continue;
            for(int j = 0; j < n; j++){
                if(d[k][j] == INF) continue;
                d[i][j] = min(d[i][j],d[i][k] + d[k][j]);
            }
        }
    }
}

int main()
{
    int e;
    cin >> n >> e;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    }
    for(int i = 0; i < e; i++){
        int s,t,v;
        cin >> s >> t >> v;
        d[s][t] = v;
    }

    warshall_floyd();

    bool negative_cycle = false;
    for(int i = 0; i < n; i++) if(d[i][i] < 0) negative_cycle = true;

    if(negative_cycle){
        cout << "NEGATIVE CYCLE" << endl;
    }else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j) cout << ' ';
                
                if(d[i][j] == INF)cout << "INF";
                else cout << d[i][j];
            }
            cout << endl;
        }
    }
}   
