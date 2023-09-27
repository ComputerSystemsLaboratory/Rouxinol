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
vector<int> data[100];
pair<int, int> finds[100];

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

int main()
{
    int n;
    cin >> n;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        cin >> temp;
        rep(j, temp)
        {
            int foo;
            cin >> foo;
            data[i].push_back(foo - 1);
        }
    }
    rep(i, 100)
    {
        finds[i].first = -1;
    }
    int hoge = 0;
    rep(i, n) if (finds[i].first == -1)
        hoge = finds[i].second = dfs(i, hoge);
    rep(i, n)
    {
        cout << i + 1 << " " << finds[i].first << " " << finds[i].second << endl;
    }
    return 0;
}