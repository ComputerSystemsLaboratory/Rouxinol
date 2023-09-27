#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
#define pii pair<int, int>
int main()
{
    char ch;
    stack<int> si;
    stack<pii> spii;
    int sum = 0;
    for (int i = 0; cin >> ch; i++)
    {
        if (ch == '\\')
        {
            si.push(i);
        }
        else if (ch == '/' && si.size() > 0)
        {
            int j = si.top();
            si.pop();
            sum += i - j;
            int a = i - j;
            while (spii.size() > 0 && spii.top().first > j)
            {
                a += spii.top().second;
                spii.pop();
            }
            spii.push(make_pair(j, a));
        }
    }
    vector<int> vi;
    while (spii.size() > 0)
    {
        vi.push_back(spii.top().second);
        spii.pop();
    }
    reverse(vi.begin(), vi.end());
    cout << sum << endl;
    cout << vi.size();
    for (int i = 0; i < vi.size(); i++)
    {
        cout << " ";
        cout << vi[i];
    }
    cout << endl;
}
