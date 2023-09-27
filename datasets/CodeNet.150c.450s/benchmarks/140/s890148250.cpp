#include <bits/stdc++.h>
using namespace std;
#define mp make_pair

struct Union_Find
{
    vector <int> parent;
    Union_Find(int N) : parent(N)
    {
        for(int i = 0; i < N; i++) parent[i] = i;
    }
    int root(int n)
    {
        if (parent[n]==n) return n;
        else
        {
            return root(parent[n]);
        }
    }

    void unite(int i,int j)
    {
        int rx,ry;
        rx=root(i);
        ry=root(j);
        if (rx==ry) return;
        else
        {
            int k;
            if (rx<ry)
            {
                parent[ry]=rx;
                return;
            }
            else
            {
                parent[rx]=ry;
                return;
            }
        }
    }
    bool same(int i, int j)
    {
        if (root(i)==root(j)) return true;
        else return false;
    }
};

int main()
{
    int V,E;
    cin >> V>> E;
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> que;
    int s,t,d;
    for (int i=0;i<E;i++)
    {
        cin >> s >> t >> d;
        que.push(mp(d,mp(s,t)));
    }
    Union_Find solve(V);
    int ans=0;
    for (int i=0;i<E;i++)
    {
        s=que.top().second.first;
        t=que.top().second.second;
        d=que.top().first;
        que.pop();
        if (!solve.same(s,t))
        {
            solve.unite(s,t);
            ans+=d;
        }
    }
    cout << ans << endl;
return 0;
}

