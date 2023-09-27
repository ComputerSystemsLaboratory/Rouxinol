#include <bits/stdc++.h>
using namespace std;

void dfs(int& time,
    int start,
    const vector<vector<int>>& graph,
    vector<int>& arraialTimes,
    vector<int>& leftTimes,
    vector<bool>& checkList)
{
    stack<int> stack;
    stack.push(start);
    checkList[start] = true;
    arraialTimes[start] = ++time;
 
    while (!stack.empty())
    {
        int v = stack.top();
        int vSize = 0;
        for (int w : graph[v]) {
            if (!checkList[w]) {
                ++vSize;
                stack.push(w);
                checkList[w] = true;
                arraialTimes[w] = ++time;
                break;
            }
        }
        if (vSize == 0) {
            stack.pop();
            leftTimes[v] = ++time;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n);
    vector<bool> checkList(n);
    vector<int> arrivalTimes(n);
    vector<int> leftTimes(n);


    graph.reserve(n);
    for (auto& g : graph) {
        int id;
        cin >> id;
        int size;
        cin >> size;
        for (int j = 0; j < size; ++j) {
            int k;
            cin >> k;
            g.push_back(k-1);
        }
    }
    int time = 0;
    for (int i = 0; i < n; ++i) {
        if (!checkList[i]) {
            dfs(time, i, graph, arrivalTimes, leftTimes, checkList);
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << i+ 1 << " " << arrivalTimes[i] << " " << leftTimes[i]<< endl;
    }

}
