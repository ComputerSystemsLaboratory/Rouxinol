// Allocation
#include<iostream>

using namespace std;

const int MAX_N = 100000;
const int MAX_Wi = 10000;

typedef long long llong;

int n, k;
llong T[MAX_N];

// 最大積載量 P の k 台のトラックで何個の荷物を積めるかを調べる関数
int check(llong P)
{
    // 積載されている荷物の数
    int i = 0;

    for(int j = 0; j < k; j++)
    {
        // トラックに積載されている荷物の重量
        llong s = 0;

        while( s + T[i] <= P )
        {
            s += T[i];
            i++;

            if( i == n )
            {
                return n;
            }
        }
    }

    return i;
}

// 2分探索を用いて、検索を実施する関数
int solve()
{
    llong left = 0;
    // ( 荷物の個数　) * ( 1個あたりの最大重量 )
    llong right = MAX_N * MAX_Wi;
    llong mid;

    while( right - left > 1 )
    {
        mid = ( left + right ) / 2;
        // 最大積載量を決めて、何個の荷物が積めるかを確認する
        int v = check(mid);

        if( v >= n )
        {
        	// 最大積載量の最小値を検索するため、右側を移動する
            right = mid;
        }
        else
        {
        	// 最大積載量が少なかったので、左側を移動する
            left = mid;
        }
    }

    return right;
}

int main(void)
{
    cin >> n >> k;

    for( int i = 0; i < n; i++ )
    {
        cin >> T[i];
    }

    llong ans = solve();

    cout << ans << '\n';
}

