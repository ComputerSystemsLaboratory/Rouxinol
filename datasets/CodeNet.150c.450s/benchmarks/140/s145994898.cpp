#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;

int find_root(int i, vector<int>& node){
    if (node[i] == i) return i;
    return node[i] = find_root(node[i], node);
}

void unite(int r1, int r2, vector<int>& node, vector<int>& hight){
    int big   = r1;
    int small = r2;
    if (hight[big] < hight[small]) swap(big, small);
    if (hight[big] == hight[small]) hight[big]++;
    node[small] = big;
}

int main(){
    int V, E;
    cin >> V >> E;
    priority_queue<pair<int, pair<int, int> > > Q;
    for (int i = 0; i < E; i++) {
        int s, t, w;
        cin >> s >> t >> w;
        Q.push(make_pair(w * -1, make_pair(s, t)));
    }
    vector<int> node(V);
    vector<int> hight(V, 0);
    for (int i = 0; i < V; i++) {
        node[i] = i;
    }
    int sum = 0;
    for (int i = 0; i < V - 1; i++) {
        int r1, r2;
        while (1) {
            r1 = find_root(Q.top().second.first , node);
            r2 = find_root(Q.top().second.second, node);
            if (r1 != r2) break;
            Q.pop();
        }
        sum += Q.top().first * -1;
        unite(r1, r2, node, hight);
        Q.pop();
    }
    cout << sum << endl;
    return 0;
}

