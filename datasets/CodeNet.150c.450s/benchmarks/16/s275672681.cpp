#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s1;
    stack<pair<int, int> > s2;
    char c;
    int ans = 0;

    for (int i = 0; cin >> c; i++)
    {
        if (c == '\\')
        {
            s1.push(i);
        }
        else if (c == '/' && s1.size() > 0)
        {
            int j = s1.top();
            s1.pop();
            int a = i - j;
            ans += a;
            while (s2.size() > 0 && s2.top().first > j)
            {
                a += s2.top().second;
                s2.pop();
            }
            s2.push(pair<int, int>(j, a));
        }
    }

    cout << ans << endl;
    int ary[s2.size()];
    int size = s2.size();
    cout << size;
    for (int i = 0; i < size; i++)
    {
        ary[i] = s2.top().second;
        s2.pop();
    }

    for (int i = 1; i <= size; i++)
    {
        cout << ' ';
        cout << ary[size - i];
    }
    cout << endl;
}
