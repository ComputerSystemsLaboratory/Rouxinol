#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define pint_int 2000000003
using namespace std;

class BFS {
public:
    vector<vector<int>> Graph_as_list;

    void emplace_back(vector<int> list) {
        Graph_as_list.push_back(list);
    }
    vector<int> Search(int u) {// search from node u
        vector<int> dist_from_u(Graph_as_list.size(), pint_int);
        queue<int> que;

        que.push(u);
        dist_from_u[u] = 0;
        while (!que.empty()) {
            int u = que.front(); que.pop();
            for (int next_node : Graph_as_list[u]) {
                if (dist_from_u[u] + 1 < dist_from_u[next_node]) {
                    dist_from_u[next_node] = dist_from_u[u] + 1;
                    que.push(next_node);
                }
            }
        }
        for (int& elem : dist_from_u) {
            if (elem == pint_int) elem = -1;
        }
        return dist_from_u;
    }
};

int main() {
    int n; cin >> n;
    BFS bfs;
    for (int i = 0; i < n; i++) {
        int u, k; cin >> u >> k; u--;
        vi temp;
        for (int j = 0; j < k; j++) {
            int v; cin >> v; v--;
            temp.push_back(v);
        }
        bfs.emplace_back(temp);
    }
    vi ans = bfs.Search(0);
    for (int i = 0; i < ans.size(); i++) {
        cout << i + 1 << " " << ans[i] << endl;
    }

}

