#include <iostream>
using namespace std;
int P[10010];
int n,q;
int comp[100000 + 10];
int x[100000 + 10];
int y[100000 + 10];
void init(int N)
{
    for(int i = 1; i <= N; ++i)
    {
        P[i] = i;
    }
}

int root(int a)
{
    if(P[a] == a)
    {
        return a;
    }
    return (P[a] = root(P[a]));
}

bool is_same_set(int a, int b)
{
    return root(a) == root(b);
}

void unite(int a, int b)
{
    P[root(a)] = root(b);
}
int main()
{
    cin >> n >> q;
    for(int i = 1; i <= q; ++i)
    {
        cin >> comp[i] >> x[i] >> y[i];
    }
    init(n);
    for(int j = 1; j <= q; ++j)
    {
        if(comp[j] == 0)
        {
            unite(x[j], y[j]);
        }
        else if(comp[j] == 1)
        {
            cout << is_same_set(x[j], y[j]) << endl;
        }
    }
    return 0;
}