#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v[n+1];
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> res(n+1,0);
    vector<int> d(n+1,-1);
    d[1]=0;
    queue<int> q;
    q.push(1);
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int to:v[a])
        {
            if(d[to]==-1)
            {
                d[to]=d[a]+1;
                q.push(to);
                res[to]=a;
            }
        }
    }
    cout << "Yes\n";
    for(int i=2;i<=n;i++) cout << res[i] << "\n";
    return 0;
}
