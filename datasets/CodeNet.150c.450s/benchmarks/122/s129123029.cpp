// 優先度付きキュー
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

#define MAX_H 2000000
// 無効な値の定義
const int INV = -1;

int parent(int i);
int leftNode(int i);
int rightNode(int i);

void buildPriorityQueue(int queue[], int size, int addElement);
int MaxPriorityQueue(int queue[], int size);

int main(void)
{
    char order[10];
    int size = 0, number;
    int priorityQueue[MAX_H];

    for(int i = 0; i < MAX_H; i++)
    {
        priorityQueue[i] = INV;
    }

    while( 1 )
    {
        cin >> order;

        if( strncmp("insert", &order[0] , 6) == 0 )
        {
            cin >> number;
            // キューを構築する
            buildPriorityQueue(&priorityQueue[0], size, number);
            size++;
        }
        else if( strncmp("extract", &order[0] , 7) == 0 )
        {
            // 最大値を返して, キューを再構築する
            cout << MaxPriorityQueue(&priorityQueue[0], size) << endl;
            size--;
        }
        else
        {
            break;
        }
    }

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

// 優先度付きキューを構築する関数
void buildPriorityQueue(int queue[], int lastNo, int addElement)
{
    bool cmpFlag = true;
    int parentNo;

    if( lastNo == 0 )
    {
        queue[1] = addElement;

        return;
    }

    // キューの最後に要素を追加して, 上に上がっていく
    lastNo++;
    queue[lastNo] = addElement;

    while( cmpFlag == true )
    {
        cmpFlag = false;

        parentNo = parent(lastNo);

        if( parentNo <= 0 )
        {
            // ルートの要素まで来たら, 処理は終了
            break;
        }

        if( queue[lastNo] > queue[parentNo] )
        {
            // 親の値よりも大きければ交換する
            swap(queue[lastNo], queue[parentNo]);
            lastNo = parentNo;

            cmpFlag = true;
        }
    }

    return;
}

// 最大値を返して, 優先度付きキューを再構築する関数
int MaxPriorityQueue(int queue[], int lastNo)
{
    bool cmpFlag = true;
    int eleNum = 0, leftNo = 0, rightNo = 0;
    int cmpNo;

    int max = queue[1];

    if( lastNo < 0 )
    {
        // 要素が存在しない時は, 無効値を返す
        return INV;
    }

    // 最後の要素を先頭に持ってくる
    queue[1] = queue[lastNo];
    queue[lastNo] = INV;
    eleNum = 1;

    while( cmpFlag == true )
    {
        cmpFlag = false;

        leftNo = leftNode(eleNum);
        rightNo = rightNode(eleNum);

        if( queue[leftNo] >= queue[rightNo] )
        {
            cmpNo = leftNo;
        }
        else
        {
            cmpNo = rightNo;
        }

        if( cmpNo < lastNo
            && queue[cmpNo] > queue[eleNum] )
        {
            cmpFlag = true;
            // 左の要素と比較
            swap(queue[cmpNo], queue[eleNum]);
            eleNum = cmpNo;
        }
    }

    return max;
}

