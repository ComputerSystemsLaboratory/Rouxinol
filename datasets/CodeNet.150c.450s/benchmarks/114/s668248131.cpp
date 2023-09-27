#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <utility>
#include <tuple>

using namespace std;
int Es[100][100] = {{0}};

int MST(int n){
    vector<bool> used(n, false);
    priority_queue< pair<int, int> > pq;
    pq.emplace(0, 0);
    int dist = 0;
    int node = 0;
    int total_dist = 0;
    while (! pq.empty()){
        tie(dist, node) = pq.top();
        pq.pop();
        if (used[node]) continue;
        used[node] = true;
        total_dist -= dist;
        for (int new_node = 0; new_node != n; ++new_node){
            if (used[new_node] || Es[node][new_node] == -1) continue;
            pq.emplace(-Es[node][new_node], new_node);
        }
    }
    return total_dist;
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    for (int i = 0; i != n; ++i){
        for (int j = 0; j != n; ++j){
            cin >> Es[i][j];
        }
    }
    cout << MST(n) << endl;
    return 0;
}