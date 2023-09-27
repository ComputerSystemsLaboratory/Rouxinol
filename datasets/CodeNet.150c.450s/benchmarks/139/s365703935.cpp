#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <set>
#include <queue>
#include <iomanip>
#include <math.h>
#include <fstream>

using namespace std;

class pqComp
{
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {
        return a.second < b.second;
    }
};

bool sorting(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(12);
    cin.tie();
    cout.tie();
    // ifstream cin("in.txt");
    // ofstream cout("out.txt");
    
    
    // int t;
    // cin >> t;
    // for (int qwe = 0; qwe < t; qwe++)
    // {
    //     cout << "Case #" << qwe + 1 << ": ";
    // }


    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x - 1].push_back(y - 1);
        v[y - 1].push_back(x - 1);
    }
    vector<bool> visited(n, false);
    vector<int> rez(n);
    queue<int> q;
    q.push(0);
    int cnt = n;
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();
        for (int i = 0; i < v[curr].size(); i++)
        {
            if (visited[v[curr][i]])
            {
                continue;
            }
            visited[v[curr][i]] = true;
            rez[v[curr][i]] = curr;
            cnt--;
            q.push(v[curr][i]);
        }
    }
    if (cnt != 0)
    {
        cout << "No\n";
        return 0;
    }
    cout << "Yes\n";
    for (int i = 1; i < n; i++)
    {
        cout << rez[i] + 1 << '\n';
    }

    return 0;
}
