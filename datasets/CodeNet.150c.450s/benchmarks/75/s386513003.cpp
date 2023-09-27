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

#define MAX_H 500000
// 無効な値の定義
const int INV = -2147483645;

int parent(int i);
int leftNode(int i);
int rightNode(int i);

void buildMaxHeap(int heap[], int size);
void maxHeapify(int heap[], int size, int top);

int main(void)
{
    int H;
    int BinaryHeap[MAX_H];

    for(int i = 0; i < MAX_H; i++)
    {
        BinaryHeap[i] = INV;
    }

    cin >> H;

    for(int i = 1; i <= H; i++)
    {
        cin >> BinaryHeap[i];
    }

    // maxヒープを作成する
    buildMaxHeap(&BinaryHeap[0], H);

    for(int i = 1; i <= H; i++)
    {
        printf(" %d", BinaryHeap[i]);
    }

    printf("\n");

    return 0;
}

// 節点の親のNo.を返す関数
int parent(int i)
{
    return i / 2;
}

// 節点の左の子のNo.を返す関数
int leftNode(int i)
{
    return 2 * i;
}

// 節点の右の子のNo.を返す関数
int rightNode(int i)
{
    return ( 2 * i ) + 1;
}

// maxヒープを構成するための関数
void buildMaxHeap(int heap[], int size)
{
    for(int i = size / 2; i > 0; i--)
    {
        // 節点 i を頂点とするmaxヒープを作成する
        maxHeapify(&heap[0], size, i);
    }

    return;
}

// 節点 node を根とする部分木が max-ヒープになるように A[i] の値を
// max-ヒープの葉へ向かって下降させる関数
// heap[] : ヒープの値を保持する配列
// size : ヒープサイズ
// top : maxヒープの頂点
void maxHeapify(int heap[], int size, int top)
{
    int largest = top;
    int left = leftNode(top);
    int right = rightNode(top);

    // 部分木の中の最大値を検索する
    if( left <= size && heap[left] > heap[top] )
    {
        largest = left;
    }

    if( right <= size && heap[right] > heap[largest] )
    {
        // 左側の要素が範囲外なら右側の要素も範囲外のため,
        // else の処理は不要
        largest = right;
    }

    if( largest != top )
    {
        // 新しい最大値が見つかったら, 値を交換する
        swap(heap[top], heap[largest]);
        // 再帰的にCallする
        maxHeapify(&heap[0], size, largest);
    }

    return;
}

