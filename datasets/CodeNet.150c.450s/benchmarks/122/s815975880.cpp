#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int parent(int i)
{
    return i / 2;
}

int right(int i)
{
    return 2 * i + 1;
}

int left(int i)
{
    return 2 * i;
}

void maxHeapify(vector<int>& A, int i)
{
    int l = left(i), r = right(i), largest;
    if (l < A.size() && A.at(l) > A.at(i)) {
        largest = l;
    } else {
        largest = i;
    }
    if (r < A.size() && A.at(r) > A.at(largest)) {
        largest = r;
    }
    if (largest != i) {
        swap(A.at(i), A.at(largest));
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(vector<int>& A)
{
    for (int i = (A.size() - 1)/2; 0 < i; i--) {
        maxHeapify(A, i);
    }
}

int heapExtractMax(vector<int>& A)
{
    int max = A.at(1);
    A.at(1) = A.back();
    A.pop_back();
    maxHeapify(A, 1);
    return max;
}

void heapIncreaseKey(vector<int>& A, int i, int key)
{
    if (key < A.at(i))
        return;
    A[i] = key;
    while (i > 1 && A.at(parent(i)) < A.at(i)) {
        swap(A.at(i), A.at(parent(i)));
        i = parent(i);
    }
}

void insert(vector<int>& A, int key)
{
    A.push_back(INT_MIN);
    heapIncreaseKey(A, A.size() - 1, key);
}

int main()
{
    string command;
    int k;
    vector<int> A;
    A.push_back(INT_MAX);
    while(1) {
        cin >> command;
        if ("insert" == command) {
            cin >> k;
            insert(A, k);
        } else if ("extract" == command) {
            cout << heapExtractMax(A) << endl;
        } else {
            break;
        }
//        cout << "queue";
//        for (auto itr = A.begin(); itr != A.end(); itr++) {
//            cout << " " << *itr;
//        }
//        cout << endl;
    }
    return 0;
}