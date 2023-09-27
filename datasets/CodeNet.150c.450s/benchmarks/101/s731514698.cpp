#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define  all(x) (x).begin(),(x).end()
typedef long long ll;

vector<int> frnd[100005];
vector<int> group(100005, 0);

void dfs(int node, int parentNode, int groupId){
    group[node] = groupId;
    for(int x: frnd[node]){
        if (x == parentNode) continue;
        if (group[x] != 0) continue;
        dfs(x, node, groupId);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    rep(i,m){
        int s, t;
        cin >> s >> t;
        frnd[s].push_back(t);
        frnd[t].push_back(s);
    }

    int gropuId = 1;
    rep(i,n){
        if (group[i] != 0) continue;
        dfs(i, -1, gropuId);
        gropuId++;
    }

    int q;
    cin >> q;
    vector<string> ans(q);
    rep(i,q){
        int s, t;
        cin >> s >> t;
        if (group[s] == group[t]) ans[i] = "yes";
        else ans[i] = "no";
    }
    rep(i,q){
        cout << ans[i] << endl;
    }
}
