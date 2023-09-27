#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    stack<int> stack1;
    stack<pair<int, int>> stack2;
    rep(i, s.size())
    {
        if (s[i] == '\\')
            stack1.push(i);
        else if (s[i] == '_')
            continue;
        else
        {
            if (!stack1.empty())
            {
                int idx = stack1.top();
                sum += i - idx;
                stack1.pop();
                int area = 0;
                while (!stack2.empty() && stack2.top().first > idx)
                {
                    int sub_area = stack2.top().second;
                    area += sub_area;
                    stack2.pop();
                }
                area += (i - idx);
                pair<int, int> p = make_pair(idx, area);
                stack2.push(p);
            }
        }
    }
    cout << sum << endl;
    cout << stack2.size();
    if (stack2.size() == 0)
        cout << endl;
    else
        cout << ' ';
    int r = stack2.size();
    vector<int> ans(r);
    rep(i, r)
    {
        ans[r - 1 - i] = stack2.top().second;
        stack2.pop();
    }
    rep(i, r)
    {
        cout << ans[i];
        if (i == r - 1)
            cout << endl;
        else
            cout << ' ';
    }
    return 0;
}

// accepted
