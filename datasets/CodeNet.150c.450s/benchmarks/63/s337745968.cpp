#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;
const long long Inf =  1e+16;

void dijkstra(vector<vector<pair<long long, long long>>>& graph, vector<long long>& used, long long r) {
    priority_queue<pair<long long, long long>,vector<pair<long long, long long>>,greater<pair<long long, long long>>> pq;
    pq.push(make_pair(0, r));
    while (pq.empty() == false) {
        long long corr_score = pq.top().first; // ????????????????????????????????¢
        long long corr_v = pq.top().second; // ?????????????????????
        pq.pop();
        if (used[corr_v] != Inf) {
            continue; 
        }
        used[corr_v] = corr_score;
        for (long long i = 0; i < graph[corr_v].size(); i ++) {
            long long tgt = graph[corr_v][i].first;
            long long score = graph[corr_v][i].second;
            if (used[tgt] == Inf) {
                pq.push(make_pair(score + corr_score, tgt));
            }
        }
    }
}

// dijkstra ?????¢?????´????????? ~ ??£??\?????????????????¨
int main() {
    long long v;
    long long e;
    long long r;
    cin >> v >> e >> r;
    vector<vector<pair<long long, long long>>> graph(v);
    for (long long i = 0; i < e; i ++) {
        long long s;
        long long t;
        long long d;
        cin >> s >> t >> d;
        graph[s].push_back(make_pair(t, d));
    }

    vector<long long> used(v, Inf);
    dijkstra(graph, used, r);

    for (long long i = 0; i < v; i ++) {
        if (used[i] == Inf) {
            cout << "INF" << endl;
        } else {
            cout << used[i] << endl;
        }
    }

}