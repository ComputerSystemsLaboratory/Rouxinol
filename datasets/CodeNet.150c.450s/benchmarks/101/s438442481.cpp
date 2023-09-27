#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

static const int N = 100000;
static const int NIL = -1;

class ListGraph {
private:
    vector<int> Graph[N];
    int Group[N];
    int n;

public:
    ListGraph()
    {
        cin >> n;
        int m;
        cin >> m;
        int u, v;
        for(int i = 0; i < m; i++)
        {
            cin >> u >> v;
            Graph[u].push_back(v);
            Graph[v].push_back(u);
        }
    }

    void dfs(int start, int group)
    {
        stack<int> stack;
        stack.push(start);
        Group[start] = group;
        while(!stack.empty())
        {
            int u = stack.top();
            stack.pop();
            for(int i = 0; i < Graph[u].size(); i++) // uの全隣接頂点に対して
            {
                int v = Graph[u][i];
                if(Group[v] == NIL) // 未訪問(グループ未定)のとき
                {
                    Group[v] = group; // 自分のグループに含める
                    stack.push(v);
                }
            }
        }
    }

    void grouping()
    {
        int id = 1;
        for(int i = 0; i < n; i++)
            Group[i] = NIL;
        for(int u = 0; u < n; u++)
        {
            if(Group[u] == NIL)
                dfs(u, id++);
        }
    }

    string answer(int start, int goal)
    {
        if(Group[start] == Group[goal])
            return "yes";
        else
            return "no";
    }
};

int main()
{
    ListGraph graph;
    graph.grouping();
    int question;
    cin >> question;
    int start, goal;
    for(int i = 0; i < question; i++)
    {
        cin >> start >> goal;
        cout << graph.answer(start, goal) << endl;
    }
}
