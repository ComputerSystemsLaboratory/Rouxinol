#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long llong;

// 要素の最大数
#define MAX 2100000

// 完全二分木ヒープの定義
struct BinaryHeap {
    int key;
    };

struct BinaryHeap Heap[MAX];

// 実際のヒープサイズ
int SIZE = 1;

// 最大ヒープ条件を満たす様にソート
void maxHeapify(BinaryHeap A[], int i)
{
    int largest = 0;
    int l = 2 * i;
    int r = 2 * i + 1;
    // 左の子、自分、右の子で値が最大のノードを選ぶ
    if (l <= SIZE && A[l].key > A[i].key) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= SIZE && A[r].key > A[largest].key){
         largest = r;
    }

    if (largest != i) {
         swap(A[i],A[largest]);
         // 再帰的に呼び出し
         maxHeapify(A, largest);
    }
}

// 適切な位置にキーを追加する
void Insert(int ikey)
{    
    int parent, pos;

    pos = ++SIZE;
    
    // 一旦末尾に追加する
    Heap[pos].key = ikey;

    // 最大ヒープ順になっていない可能性があるのでチェックする
    parent = pos / 2;
    while (pos > 1 && Heap[pos].key > Heap[parent].key)
    {
        // 適切な位置に移動する
        swap(Heap[pos], Heap[parent]);
        pos = parent;
        parent = pos / 2;
    }
}

// ヒープから最大値を持つキーを取り出し削除し、その値を返す
int ExtractMax() {
    if (SIZE < 1) return -1;

    // 最初の要素が最大値となる様にソートされているはず
    int iMax = Heap[1].key;

    // 取り出した先頭要素を削除する
    Heap[1].key = Heap[SIZE].key;
    SIZE--;

    // 最大値を更新するためにソートする
    maxHeapify(Heap, 1);

    return iMax;
}

int main()
{
    int iNodeIdx = 0;
    string strCmd = "";
    
    while(strCmd != "end")
    {
        // キーを取得
        cin >> strCmd;
        if (strCmd == "insert") {
            cin >> iNodeIdx;
            Insert(iNodeIdx);
        }
        else if (strCmd == "extract") {
            cout << ExtractMax() << "\n";
        } 
    }
    return 0;
}
