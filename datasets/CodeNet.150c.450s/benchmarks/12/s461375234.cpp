// 2分ヒープ
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_H 250
const int INV = -2147483645;

int main(void)
{
    int H, node, parent, left, right;
    int ary_BinaryHeap[MAX_H + 1];

    for(int i = 0; i < MAX_H; i++)
    {
        // 配列の初期化
        ary_BinaryHeap[i] = INV;
    }

    cin >> H;

    for(int i = 1; i <= H; i++)
    {
        // ノードの値を格納
        cin >> node;
        ary_BinaryHeap[i] = node;
    }

    // 結果を表示
    for(int i = 1; i <= H; i++)
    {
        cout << "node " << i << ": ";
        cout << "key = " << ary_BinaryHeap[i] << ", ";

        parent = i / 2;
        left = 2 * i;
        right = ( 2 * i ) + 1;

        if( parent > 0 )
        {
            cout << "parent key = " << ary_BinaryHeap[parent] << ", ";
        }

        if( left <= H
            && ary_BinaryHeap[left] != INV )
        {
            cout << "left key = " << ary_BinaryHeap[left] << ", ";
        }

        if( right <= H
            && ary_BinaryHeap[right] != INV )
        {
            cout << "right key = " << ary_BinaryHeap[right] << ", ";
        }

        cout << endl;
    }

    return 0;
}

