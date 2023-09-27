#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>

constexpr int INF = 1 << 16;

struct Edge {
    int start;
    int cost = INF;
    std::vector<int> to;
    std::unordered_map<int, int> time;
};

bool operator>(const Edge& lhs, const Edge& rhs)
{
    return lhs.cost > rhs.cost;
}

bool operator<(const Edge& lhs, const Edge& rhs)
{
    return lhs.cost < rhs.cost;
}

std::vector<Edge> makeEdgeFromData(int data_num, int& max_city);

int calcMinimumTimeToAllCitys(int start_city, int max_city,
    std::vector<Edge> edge);

int main()
{
    int data_num;
    while (std::cin >> data_num) {
        if (data_num == 0) {
            break;
        }
        int max_city;
        const auto edge = makeEdgeFromData(data_num, max_city);

        int min_cost
            = calcMinimumTimeToAllCitys(edge.at(0).start, max_city, edge);
        int min_city = 0;

        for (int i = 1; i <= max_city; ++i) {
            int cost = calcMinimumTimeToAllCitys(edge.at(i).start, max_city, edge);
            if (cost < min_cost) {
                min_cost = cost;
                min_city = i;
            }
        }

        std::cout << min_city << " " << min_cost << std::endl;
    }

    return 0;
}

std::vector<Edge> makeEdgeFromData(int data_num, int& max_city)
{
    std::vector<Edge> edge(10);

    max_city = 0;
    for (int i = 0; i < data_num; ++i) {
        int start, goal, time;
        std::cin >> start >> goal >> time;
        edge.at(start).start = start;
        edge.at(start).to.push_back(goal);
        edge.at(start).time[goal] = time;

        edge.at(goal).start = goal;
        edge.at(goal).to.push_back(start);
        edge.at(goal).time[start] = time;

        max_city = std::max({start, goal, max_city});
    }

    return edge;
}

int calcMinimumTimeToAllCitys(
    int start_city,
    int max_city,
    std::vector<Edge> edge)
{
    for (auto& e : edge) {
        e.cost = INF;
    }

    edge.at(start_city).cost = 0;

    std::priority_queue<Edge> Q;
    Q.push(edge.at(start_city));

    while (!Q.empty()) {
        auto q = Q.top();
        Q.pop();

        for (int to : q.to) {
            if (edge.at(to).cost > q.cost + q.time.at(to)) {
                edge.at(to).cost = q.cost + q.time.at(to);
                Q.push(edge.at(to));
            }
        }
    }

    int cost = 0;
    for (int i = 0; i <= max_city; ++i) {
        cost += edge.at(i).cost;
    }

    return cost;
}