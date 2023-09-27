#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <limits>
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define int_INF 2147483647
#define pint_INF 2000000000
#define ll_INF 	9223372036854775807
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvc vector<vector<char>>
#define vll vector<long long>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define endl "\n"
#define pno cout << "no" << endl
#define pyes cout << "yes" << endl
#define pYes cout << "Yes" << endl
#define pNo cout << "No" << endl
#define pNO cout << "NO" << endl
#define pYES cout << "YES" << endl
using namespace std;
using ll = long long;

struct Node {
public:
    int parent;
    vector<vector<int>> to_child; // {node_number,weight}
};

bool comp(const vector<int>& a, const vector<int>& b) {
    if (a[1] != b[1]) {
        return a[1] > b[1];
    }
    else {
        return a[0] < b[0];
    }
}


//startを起点にするDjikstra
vector<int> Dijkstra(vector<Node> Graph_V, int start) {
    vector<int> Cost(Graph_V.size(), pint_INF);
    vector<bool> isVisited(Graph_V.size());
    priority_queue<vector<int>, vector<vector<int>>, decltype(&comp)> pq(&comp);
    Cost[start] = 0;
    pq.push({ start,0 });
    while (!pq.empty()) {
        int parent = pq.top()[0]; pq.pop();
        Node u = Graph_V[parent];
        if (isVisited[parent] == true) {
            continue;
        }
        isVisited[parent] = true;
        
        for (vector<int> child : u.to_child) {
            if (Cost[parent] + child[1] < Cost[child[0]]) {
                Cost[child[0]] = Cost[parent] + child[1];
                pq.push({ child[0],Cost[child[0]] });
            }
        }
    }

    return Cost;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int V, E, r; cin >> V >> E >> r;
    vector<Node> graph(V);
    for (int i = 0; i < E; i++) {
        int s, t, d; cin >> s >> t >> d;
        graph[s].to_child.push_back({ t,d });
    }
    vector<int> cost = Dijkstra(graph, r);

    for (auto v : cost) {
        if (v == pint_INF) {
            cout << "INF" << "\n";
        }
        else {
            cout << v << "\n";
        }
    }

}
