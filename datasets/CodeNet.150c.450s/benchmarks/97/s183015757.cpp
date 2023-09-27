#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ipair;

ipair operator+(const ipair &a, const ipair &b)
{
    return ipair(a.first + b.first, a.second + b.second);
}

const ipair d[] = {ipair(-1, 0), ipair(0, 1), ipair(1, 0), ipair(0, -1)};

bool cmp_snd(const ipair &a, const ipair &b)
{
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    int n;
    while(cin >> n, n)
    {
        ipair ss[n];
        ss[0] = ipair(0, 0);
        for(int i=1; i<n; i++)
        {
            int c, dir;
            cin >> c >> dir;
            ss[i] = ss[c] + d[dir];
        }
        sort(ss, ss+n);
        int w = ss[n-1].first - ss[0].first + 1;
        sort(ss, ss+n, cmp_snd);
        int h = ss[n-1].second - ss[0].second + 1;
        cout << w << " " << h << endl;


    }
}