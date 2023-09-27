#define loop(i,s,e) for(ll i = s;i < e;i++)

#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

typedef long long signed ll;

ll v,e,g[100][100],s,t,d;

ll dd[100];
bool visited[100];
bool ngl;

void dfs(ll n) {
    loop(i,0,v){
        if(g[n][i] != 0xffffffffffff){
            if(dd[i] > dd[n] + g[n][i]) {
                dd[i] = dd[n] + g[n][i];
                if(visited[i]){ngl = true;break;}
                visited[i] = true;
                dfs(i);
                visited[i] = false;
            }
        }
    }
}

int main() {
    for(ll i = 0;i < 100;i++)for(ll j = 0;j < 100;j++) if(i!=j)g[i][j] = 0xffffffffffff;
    cin >> v >> e;
    loop(i,0,e) {cin >> s >> t >> d;g[s][t] = d;}
    loop(j,0,v) {
        loop(i, 0, 100) {
            dd[i] = 0xffffffffffff;
            visited[i] = false;
        }
        dfs(j);
    }
    if(ngl){
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    loop(i,0,v)loop(j,0,v)loop(k,0,v)g[j][k]=min(g[j][k],g[j][i]+g[i][k]);
    loop(x,0,v){loop(y,0,v){if(g[x][y]>=0x7fffffffffff)cout<<"INF";else cout<<g[x][y];if(y!=v-1)cout<<" ";}cout<<endl;}
}


