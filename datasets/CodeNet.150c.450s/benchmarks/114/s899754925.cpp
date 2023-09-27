#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <utility>

using namespace std;

// int search_xyz(int e);
int tree[100];

int root(int a);
bool is_same_set(int p, int q);
void joint(int x, int y);

int main()
{
    int n, tempa, k = 0;
    cin >> n;
    int e = n * (n - 1) / 2;
    pair<int, pair<int, int>

         >
        a[e];
    for (int i = 0; i < n; i++)
    {
        tree[i] = i;
        for (int j = 0; j < n; j++)
        {
            cin >> tempa;
            if (i < j)
            {
                a[k] = make_pair(tempa, make_pair(i, j));
                k++;
            }
        }
    }
    sort(a, a + e);
    int result = 0;
    for (int i = 0; i < e; i++)
    {
        if (a[i].first == -1)
            continue;

        if (is_same_set(a[i].second.first, a[i].second.second))
        {
            continue;
        }
        else
        {
            joint(a[i].second.first, a[i].second.second);
            result += a[i].first;
        }
    }
    cout << result << endl;
    return 0;
}

int root(int a)
{
    if (tree[a] == a)
    {
        return a;
    }
    else
    {
        tree[a] = root(tree[a]);
        return tree[a];
    }
}

bool is_same_set(int p, int q)
{
    return root(p) == root(q);
}

void joint(int x, int y)
{
    tree[root(x)] = root(y);
}

