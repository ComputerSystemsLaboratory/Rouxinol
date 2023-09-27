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
#include <cmath> // sqrt
#define _GLIBCXX_DEBUG // check []
#define DIVISOR 1000000007

using namespace std;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<int64_t, int64_t> pII;

template<typename T>
void cins(vector<T>& arr) { for(T& e: arr) cin >> e; }

#ifdef DEBUG
#define debug(fmt, ...) \
    printf("[debug: %s] " fmt, __func__, __VA_ARGS__)
#define ps(arr) \
    debug("size %ld: ", arr.size()); \
    for(auto e: arr) cout << e << " "; \
    cout << endl;
#else
#define debug(fmt, ...)
#define ps(arr)
#endif


#define INF (1e+9)
int main(void) {
    int vs, es;
    cin >> vs >> es;

    vector<vector<int>> graph(vs);
    for(int i = 0; i < es; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        v1--; v2--;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    // count, prev
    vector<pii> table(vs, make_pair(INF, 0));
    table[0] = make_pair(0, 0);
    queue<int> queue;
    queue.push(0);

    while(!queue.empty()) {
        int src = queue.front(); queue.pop();
        debug("v: %d\n", src);
        int count = table[src].first;
        for(int dst: graph[src]) {
            if(table[dst].first > count+1) {
                table[dst] = make_pair(count+1, src);
                queue.push(dst);
            }
        }
    }

    bool flag = true;
    for(int i = 0; i < vs; i++) {
        if(table[i].first == INF) flag = false;
    }
    if(flag) {
        cout << "Yes" << endl;
        for(int i = 1; i < vs; i++) {
            cout << table[i].second + 1 << endl;
        }
    } else {
        cout << "No" << endl;
    }
    return 0;
}