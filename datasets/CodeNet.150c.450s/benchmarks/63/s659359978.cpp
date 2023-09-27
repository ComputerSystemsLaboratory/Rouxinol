#include <iostream>
#include <vector>
#include <queue>
int main()
{
    long long v, e, r;
    std::cin >> v >> e >> r;
    std::vector<std::vector<std::pair<long long, long long>>> edges(v);
    for (long long i = 0; i < e; ++i) {
        long long s, t, d;
        std::cin >> s >> t >> d;
        edges[s].push_back(std::make_pair(d, t));
    }

    const long long inf = 1000000000;
    std::vector<long long> dist(v, inf);

    std::priority_queue<
        std::pair<long long, long long>,
        std::vector<std::pair<long long, long long>>,
        std::greater<std::pair<long long, long long>>>
        q;
    q.push(std::make_pair(0, r));
    while (!q.empty()) {
        std::pair<long long, long long> hoge = q.top();
        long long d = hoge.first;
        long long t = hoge.second;
        q.pop();
        if (d < dist[t]) {
            dist[t] = d;
            for (auto huga : edges[t]) {
                long long l = huga.first;
                long long u = huga.second;
                if (dist[u] > d + l) {
                    q.push(std::make_pair(d + l, u));
                }
            }
        }
    }

    for (long long d : dist) {
        if (d == inf)
            std::cout << "INF" << std::endl;
        else
            std::cout << d << std::endl;
    }
}
