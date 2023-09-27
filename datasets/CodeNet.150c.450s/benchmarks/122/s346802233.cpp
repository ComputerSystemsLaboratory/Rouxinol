#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue {
    vector<int> heap;
    int sz;

public:
    PriorityQueue(int n) { sz = 0; heap.resize(n); }
    void Push(int x);
    int Pop();
};

void PriorityQueue::Push(int x)
{
    // 自分のノード番号
    int i = sz++;

    while (i > 0) {
        // 親のノード番号
        int p = (i - 1) / 2;

        // もう逆転していないなら抜ける
        if (heap[p] >= x)
            break;
        // 親のノードの数字を下ろして，自分は上に
        heap[i] = heap[p];
        i = p;
    }

    heap[i] = x;
}

int PriorityQueue::Pop()
{
    // 最小値
    int ret = heap[0];

    // 根に持ってくる値
    int x = heap[--sz];

    // 根からおろしていく
    int i = 0;
    while (i * 2 + 1 < sz) {
        // 小同士を比較
        int a = i * 2 + 1, b = i * 2 + 2;
        if (b < sz && heap[b] > heap[a])
            a = b;

        // もう逆転してないなら終わり
        if (heap[a] <= x)
            break;

        // 個の数字を持ち上げる
        heap[i] = heap[a];
        i = a;
    }

    heap[i] = x;

    return ret;
}

int main()
{
    string s;
    int k;
    PriorityQueue pq(2000000);

    while (cin >> s) {
        if (s == "end")
            break;
        else if (s == "insert") {
            cin >> k;
            pq.Push(k);
        }
        else if (s == "extract") {
            cout << pq.Pop() << '\n';
        }
    }

    return 0;
}