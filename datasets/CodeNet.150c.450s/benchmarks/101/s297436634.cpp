#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <list>
#include <bitset>

using namespace std;
typedef long long ll;

// #define DEBUG

int find(int a[], int x)
{
    while (a[x] != x)
    {
        a[x] = a[a[x]];
        x = a[x];
    }
    return x;
}

void unite(int a[], int x, int y)
{
    x = find(a, x);
    y = find(a, y);
    if (x != y)
    {
        a[x] = y;
    }
}

int main()
{
#ifdef DEBUG
    cout << "DEBUG MODE" << endl;
    ifstream in("input.txt"); //for debug
    cin.rdbuf(in.rdbuf());    //for debug
#endif

    int n, m, q, x, y;
    cin >> n >> m;
    int p[n];
    for (int i = 0; i < n; i++)
        p[i] = i;

    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        unite(p, x, y);
    }
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << ((find(p, x) == find(p, y)) ? "yes" : "no") << endl;
    }
    return 0;
}

// getline(cin,s);
// a = strtok(s, ",");  ","で分解
// for (int i = 0; i < n; i++)
