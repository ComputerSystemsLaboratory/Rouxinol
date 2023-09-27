#include<bits/stdc++.h>

using namespace std;

#define yes             cout << "yes\n"
#define no              cout << "no\n"
#define lop(n)          for(int i = 0; i < n; i++)
#define N               100009

int rep[N], n, m;

int findrep(int a)
{
    if(rep[a] == a)
        return a;

    return rep[a] = findrep(rep[a]);
}

void Union(int a, int b)
{
    rep[findrep(a)] = findrep(b);
}

int main()
{
    int u, v, q;

    cin >> n >> m;

    lop(n) rep[i] = i;

    lop(m)
    {
        cin >> u >> v;

        Union(u, v);
    }

    lop(n) u = findrep(i);

    cin >> q;

    lop(q)
    {
        cin >> u >> v;

        rep[u] == rep[v] ? yes : no;
    }

    return 0;
}

