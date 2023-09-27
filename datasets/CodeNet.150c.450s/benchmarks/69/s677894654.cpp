#include <iostream>
using namespace std;
const int N = 20;

int ball[N];

bool dfs(int n, int l, int r)
{
    if (n == 10)    return true;
    if (ball[n] < l && ball[n] < r) return false;
    if (ball[n] > l)
    {
        if(dfs(n+1, ball[n], r))   return true;
    }
    if (ball[n] > r)
    {
        if (dfs(n+1, l, ball[n]))    return true;
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 10; ++i)
            cin >> ball[i];
        bool flag = dfs(0 , 0, 0);
        if (flag)   cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}