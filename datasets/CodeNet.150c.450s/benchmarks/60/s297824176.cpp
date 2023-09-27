/*
 * Problem Description: Graph I - Graph
 * Category: Graph
 * Author: Khan
 * Date: 18th October, 2017
 */

#include <iostream>
#include <cstring>
#include <algorithm>

#define MAXN 100

using namespace std;

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int n, G[MAXN + 1][MAXN + 1], t;
    memset(G, 0, sizeof(G));
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> t >> t;
        int tmp;
        for (int j = 0; j < t; ++j)
        {
            cin >> tmp;
            G[i + 1][tmp] = 1;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(j != 0)
                cout << " ";
            cout << G[i + 1][j + 1];
        }
        cout << endl;
    }
    return 0;
}