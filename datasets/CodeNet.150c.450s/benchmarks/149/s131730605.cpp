#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
// I LOVE IT :D
#define int long long
using namespace std;
inline int in() {int32_t x ; scanf("%d",&x) ; return x ; }
inline string getStr() {char ch[1000000] ; scanf("%s",ch) ; return ch ;}
const int MAX_N = 1e4 + 5;
int pr[MAX_N];
int sz[MAX_N];
int find(int p)
{
    if (pr[p] == p ) return p;
    return pr[p] = find(pr[p]);
}
int32_t main()
{
    int n = in() , q = in();
    for (int i = 0 ; i < n ; i ++)
        pr[i] = i , sz[i] = 1;
    for (int i = 0 ; i < q ; i ++)
    {
        bool tp = in();
        int u = in() , v = in();
        if (tp) // same
        {
            cout << (find(u) == find(v)) << "\n";
        }
        else // unite
        {
            u = find(u) , v = find(v);
            if (sz[u] < sz[v]) swap(u , v);
            pr[v] = u;
            if (sz[v] == sz[u]) sz[u] ++;
        }
    }
}