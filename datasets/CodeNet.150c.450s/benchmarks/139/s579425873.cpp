#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <limits>

int main()
{
    std::unordered_map<int, std::vector<int>> graph;
    int N, M;
    std::cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        graph.insert(std::make_pair(i, std::vector<int>{}));
    }
    for (int i = 1; i <= M; i++)
    {
        int A, B;
        std::cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    // 最短距離, 道標
    std::vector<std::pair<int, int>> state;
    state.resize(N + 1);
    for (int i = 1; i <= N; i++)
    {
        state[i].first = std::numeric_limits<int>::max();
        state[i].second = -1;
    }
    std::queue<int> q{{1}};
    while (!q.empty())
    {
        int current_room_id = q.front();
        q.pop();
        int next_step = state[current_room_id].first;
        for (auto const &adj_room_id : graph[current_room_id])
        {
            if (next_step + 1 < state[adj_room_id].first)
            {
                state[adj_room_id].first = next_step + 1;
                state[adj_room_id].second = current_room_id;
                q.emplace(adj_room_id);
            }
        }
    }

    std::cout << "Yes\n";
    for (int i = 2; i <= N; i++)
    {
        std::cout << state[i].second << std::endl;
    }
}