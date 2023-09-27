// 最長共通部分列 問題
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_N 100
// 無効な値の定義
const int INV = -1;

int main(void)
{
    int n, u, num, v_num;
    int ary_adj[MAX_N];

    for(int i = 0; i < MAX_N; i++)
    {
        ary_adj[i] = 0;
    }

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> u;
        cin >> num;

        for(int j = 0; j < num; j++)
        {
            cin >> v_num;
            ary_adj[v_num] = 1;
        }

        for(int k = 1; k <= n; k++)
        {
            if( k > 1 )
            {
                cout << " ";
            }

            if( ary_adj[k] == 1 )
            {
                cout << 1;
                ary_adj[k] = 0;
            }
            else
            {
                cout << 0;
            }
        }

        cout << endl;
    }

    return 0;
}

