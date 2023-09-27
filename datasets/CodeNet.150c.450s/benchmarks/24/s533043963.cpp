#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> ipair;
typedef priority_queue<ipair> pq;

int main()
{
    int n, m;
    while(cin >> n >> m, n|m)
    {
        pq q;
        int res = 0;
        for(int i=0; i<n; i++)
        {
            int d, p;
            cin >> d >> p;
            res += d * p;
            q.push(ipair(p, d));
        }
        while(!q.empty() && m>0)
        {
            ipair x = q.top();
            q.pop();
            res -= x.first * min(m, x.second);
            m -= x.second;
        }
        cout << res << endl;
    }
}