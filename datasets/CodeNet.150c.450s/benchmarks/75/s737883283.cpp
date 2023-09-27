#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long llong;

// 完全二分木の子の数(葉以外)
#define BINARY_CHILDREN_NUM 2

// 空きノードを示す定数
#define NIL 2100000000
// 要素の最大数
#define MAX 600000


// 完全二分木ヒープの定義
struct BinaryHeap {
    int key, left, right, parent;
    };

struct BinaryHeap Heap[MAX];

// ヒープサイズ
int H;

// 最大ヒープ
void maxHeapify(BinaryHeap A[], int i)
{
    int largest = 0;
    int l = 2 * i;
    int r = 2 * i + 1;
    // 左の子、自分、右の子で値が最大のノードを選ぶ
    if (l <= H && A[l].key > A[i].key) {
        largest = l;
    } else {
        largest = i;
    }

    if (r <= H && A[r].key > A[largest].key){
         largest = r;
    }

    if (largest != i) {
         swap(A[i],A[largest]);
         //cout << A[i].key << endl;
         // 再帰的に呼び出し
         maxHeapify(A, largest);
    }
}

void BuildMaxHeap(BinaryHeap A[])
{
    for(int i=H/2; i>0; i--) {
        maxHeapify(A,i);
    }
}

int main()
{
    // 節点の個数
    int n = 0;
    // 次数
    int iDeg = 0;
    int iNodeIdx = 0;
    int left, node, root;

    cin >> H;

    // 初期化
    for (int i = 0; i < MAX; i++)
    {
        Heap[i].parent = Heap[i].left = Heap[i].right = NIL;
    }
    
    // 各ノードに対して、
    // その節点番号、子の情報を、
    // 記憶していく
    for (int i = 1; i < H+1; i++)
    {
        //キーを取得
        cin >> iNodeIdx;
        Heap[i].key = iNodeIdx;
        //cout << Heap[i].key << endl;
        int tmp = 0;

        // 親・子を取得
        double ParentIdx = floor(i/2);
        if(ParentIdx > 0 && ParentIdx < n+1) Heap[i].parent = ParentIdx;

        tmp = 2 * i;
        if (tmp > 0 && tmp < n+1) Heap[i].left = tmp;
        
        tmp = 2 * i + 1;
        if (tmp > 0 && tmp < n+1) Heap[i].right = tmp;
    }

    BuildMaxHeap(Heap);

    for (int i = 1; i < H+1; i++)
    {
        if (i == H) {
            cout << " " << Heap[i].key << "\n";
        } else {
            cout << " " << Heap[i].key;
        }
    }

    return 0;
}
