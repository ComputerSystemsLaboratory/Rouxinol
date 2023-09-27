// ALDS1_11_B.cpp
// Graph I - Depth First Search

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

struct Vertex
{
    int id;
    vector<int> adjList;
    int d = 0;
    int f = 0;
};

int cnt = 0;

void dfs(vector<Vertex> &V, int n, int i)
{
    if (V[i].d != 0 && V[i].f != 0)
        return;
    int len = V[i].adjList.size();
    V[i].d = ++cnt;

    for (int j = 0; j < len; j++) {
        int next = V[i].adjList[j];
        if (V[next].d == 0) {
            // V[next].d = ++cnt;
            dfs(V, n, next);
            //V[next].f = ++cnt;
        }
    }
    V[i].f = ++cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<Vertex> V(n);
    int id;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> id >> num;
        V[id-1].id = id-1;
        int tmp;
        for (int j = 0; j < num; j++) {
            cin >> tmp;
            V[id-1].adjList.push_back(tmp-1);
        }
    }
    for (int i = 0; i < n; i++)
        dfs(V, n, i);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", i + 1, V[i].d, V[i].f);
    }
    return 0;
}