#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int n;
int res = 0;
struct node {
    int id;
    int parent;
};

node v[100];
vector<tuple<int, int, int>> cost;
vector<int> path;

int find(node x){
    if(x.parent == -1){
        REP(i, path.size())
            v[path[i]].parent = x.id;
        path.clear();
        return x.id;
    }
    else{
        path.push_back(x.id);
        return find(v[x.parent]);
    }
}

void marge(node x, node y){
    int x_id = find(x);
    int y_id = find(y);
    if(x_id == y_id)
        return;
    else
        v[y_id].parent = x_id;
    return;
}

bool judge(node x, node y){
    vector<int> xpath, ypath;
    return find(x) == find(y);
}

int main() {
    cin >> n;
    REP(i, n) REP(j, n) {
        int tmp;
        cin >> tmp;
        if(tmp != -1)
            cost.push_back(make_tuple(tmp, i, j));
    }
    REP(i, n){
        v[i].id = i;
        v[i].parent = -1;
    }
    sort(ALL(cost));
    REP(i, cost.size()){
        node from = v[get<1>(cost[i])];
        node to = v[get<2>(cost[i])];
        if(judge(from, to)){
            continue;
        }
        res += get<0>(cost[i]);
        marge(from, to);
    }

    cout << res << endl;
    return 0;
}