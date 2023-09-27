#include <bits/stdc++.h>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int n, m;
struct node {
    int id;
    int parent;
};

node person[100000];
vector<int> path;

int find(node x){
    if(x.parent == -1){
        REP(i, path.size())
            person[path[i]].parent = x.id;
        path.clear();
        return x.id;
    }
    else{
        path.push_back(x.id);
        return find(person[x.parent]);
    }
}

void marge(node x, node y){
    int x_id = find(x);
    int y_id = find(y);
    if(x_id == y_id)
        return;
    else
        person[y_id].parent = x_id;
    return;
}

bool judge(node x, node y){
    vector<int> xpath, ypath;
    return find(x) == find(y);
}

int main() {
    cin >> n >> m;
    REP(i, n){
        person[i].id = i;
        person[i].parent = -1;
    }
    REP(i, m){
        int s, t;
        cin >> s >> t;
        if(person[t].parent == -1)
            person[t].parent = person[s].id;
        else if(person[s].parent == -1)
            person[s].parent = person[t].id;
        else marge(person[s], person[t]);
    }
    int q;
    cin >> q;
    REP(i, q){
        int s, t;
        cin >> s >> t;
        if(judge(person[s], person[t]))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}