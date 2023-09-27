// ALDS1_9_C.cpp
// Heaps - Priority Queue

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
static const int N = 2000000;
int H = 0;
vector<int> heaps(N);

void insert(vector<int> &heaps, int num)
{
    heaps[++H] = num;
    int i = H;
    int parent = i / 2;
    while (parent >= 1 && heaps[parent] < heaps[i]) {
        swap(heaps[parent], heaps[i]);
        i = parent;
        parent = i / 2;
    }
}

void maxHeapify(vector<int> &A, int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int greatest = i;
    if (l <= H && A[l] > A[i]) {
        greatest = l;
    }
    if (r <= H && A[r] > A[greatest]) {
        greatest = r;
    }
    if (greatest != i) {
        swap(A[greatest], A[i]);
        maxHeapify(A, greatest);
    }
}

void extract(vector<int> &heaps)
{
    if (H < 1) {
        return;
    }
    int res = heaps[1];
    heaps[1] = heaps[H--];
    maxHeapify(heaps, 1);
    cout << res << endl;
}

int main()
{
    string cmd;
    int num;

    while(cin >> cmd) {
        if (cmd == "end") break;
        else if (cmd == "insert") {
            cin >> num;
            insert(heaps, num);
        }
        else if (cmd == "extract") {
            extract(heaps);
        }
    }
    return 0;
}