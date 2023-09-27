#include <bits/stdc++.h>
using namespace std;

struct Unionfind
{
    int parent[10005];

    Unionfind()
    {
        fill_n(parent, 10005, -1);
    }

    int getp(int x)
    {
        if(parent[x] == -1) return (x);
        return (parent[x] = getp(parent[x]));
    }

    void unite(int a, int b)
    {
        a = getp(a), b = getp(b);
        if(a != b) parent[a] = b;
    }

    int same(int a, int b)
    {
        if(getp(a) == getp(b)) return (1);
        return (0);
    }
};

int main()
{
    int N, Q;
    Unionfind tree;

    cin >> N >> Q;

    while(Q--) {
        int A, B, C;
        cin >> A >> B >> C;
        if(A == 0) tree.unite(B, C);
        else cout << tree.same(B, C) << endl;
    }

    return (0);
}