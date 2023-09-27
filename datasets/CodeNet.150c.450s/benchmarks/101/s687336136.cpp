#include <bits/stdc++.h>
using namespace std;
#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG true
// sort(a.begin(), a.end(), std::greater<int>());

/*
std::vector<std::string> split(const std::string &input, char delimiter)
{
    std::istringstream stream(input);

    std::string field;
    std::vector<std::string> result;
    while (std::getline(stream, field, delimiter))
    {
        result.push_back(field);
    }
    return result;
}
*/
/*
int dfs(int foo, int timer)
{
    //foo is node number
    if (finds[foo].first != -1)
        return timer;
    finds[foo].first = ++timer;
    int result = timer;
    if (data[foo].size() != 0)
    {
        rep(i, data[foo].size())
        {
            result = dfs(data[foo][i], result);
        }
    }
    finds[foo].second = ++result;
    return result;
}
*/

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> data[100000];
    int group[100000] = {0}, id = 1;
    rep(i, m)
    {
        int l, r;
        cin >> l >> r;
        data[l].push_back(r);
        data[r].push_back(l);
    }
    queue<int> que;
    rep(i, n)
    {
        que.push(i);
        if (group[i] == 0)
            group[i] = id;
        while (!que.empty())
        {
            int foo = que.front();
            que.pop();
            rep(i, data[foo].size())
            {
                if (group[data[foo][i]] == 0)
                {
                    group[data[foo][i]] = id;
                    que.push(data[foo][i]);
                }
            }
        }
        id++;
    }
    int q;
    cin >> q;
    rep(i, q)
    {
        int a, b;
        cin >> a >> b;
        if (group[a] == group[b])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}