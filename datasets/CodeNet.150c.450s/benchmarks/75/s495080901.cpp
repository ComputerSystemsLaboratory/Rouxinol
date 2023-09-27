#include <iostream>
#include <vector>
#include <algorithm>
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

int main()
{
    int H;
    cin >> H;
    vector<int> A(H + 1);
    for (int i = 1; i <= H; i++) {
        cin >> A.at(i);
    }
    buildMaxHeap(A);
    for (auto itr = A.begin() + 1; itr != A.end(); ++itr)
        cout << " " << *itr;
    cout << endl;
    return 0;
}