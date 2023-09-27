#include <bits/stdc++.h>
using namespace std;

struct dice
{
    int x[6];
    void roll(char c)
    {
        int a;
        if (c == 'N')
        {
            a = x[0];
            x[0] = x[1];
            x[1] = x[5];
            x[5] = x[4];
            x[4] = a;
        }
        if (c == 'S')
        {
            a = x[0];
            x[0] = x[4];
            x[4] = x[5];
            x[5] = x[1];
            x[1] = a;
        }
        if (c == 'E')
        {
            a = x[0];
            x[0] = x[3];
            x[3] = x[5];
            x[5] = x[2];
            x[2] = a;
        }
        if (c == 'W')
        {
            a = x[0];
            x[0] = x[2];
            x[2] = x[5];
            x[5] = x[3];
            x[3] = a;
        }
    }
    int top(void)
    {
        return x[0];
    }
    int front(void)
    {
        return x[1];
    }
    int right(void)
    {
        return x[2];
    }
};

int main()
{
    dice d;
    for (int i = 0; i < 6; ++i)
        cin >> d.x[i];
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int a, b, ans;
        cin >> a >> b;
        string s = "ENESNESNESNESENESNESNESNESENESNESNESNESENESNESNESNESNNESNESNESNESNNESNESNESNES";
        int n = s.size();
        for (int j = 0; j < n; ++j)
        {
            d.roll(s[j]);
            if (d.top() == a && d.front() == b)
                ans = d.right();
        }
        cout << ans << endl;
    }
    return 0;
}
