#include <iostream>
#include <vector>

using namespace std;

const int INFTY = (1 << 29);

class Edge
{
public:
    int s, t, w;
    Edge(int v = 0, int u = 0, int weight = 0) : s(v), t(u), w(weight) {}

    int get_weight() const { return w; }
};

bool operator<(const Edge &e1, const Edge &e2)
{
    return e1.get_weight() < e2.get_weight();
}

void Belman(vector<Edge> &edges, vector<long long> &cost, int N)
{
    for (int i = 0; i < N; i++)
    {
        for (Edge e : edges)
        {
            if(cost[e.s] == INFTY) continue;
            if (cost[e.t] > cost[e.s] + e.w)
            {
                cost[e.t] = cost[e.s] + e.w;
            }
        }
    }
}

int main()
{
    int N, M, r, s, t, w;
    cin >> N >> M >> r;
    vector<Edge> edges(M);
    vector<long long> cost(N);

    for (int i = 0; i < N; i++)
    {
        cost[i] = INFTY;
    }

    cost[r] = 0;

    for (int i = 0; i < M; i++)
    {
        cin >> s >> t >> w;
        edges[i] = Edge(s, t, w);
    }

    Belman(edges, cost, N);

    bool flag = true;
    for(Edge e : edges){
        if(cost[e.s] == INFTY) continue;
        if(cost[e.s] + e.w < cost[e.t]){
            flag = false;
        }
    }

    if (flag)
    {
        for (int i = 0; i < N; i++)
        {
            if (cost[i] == INFTY)
                cout << "INF";
            else
            {
                cout << cost[i];
            }
            cout << endl;
        }
    }
    else
    {
        cout << "NEGATIVE CYCLE" << endl;
    }
}
