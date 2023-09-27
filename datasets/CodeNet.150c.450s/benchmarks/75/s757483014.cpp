// ALDS1_9_B.cpp
// Heaps - Maximum Heap

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int left(int i) {
    return 2 * i;
}
int right(int i) {
    return 2 * i + 1;
}

void maxHeapify(vector<int>& A, int i)
{
    int l = left(i);
    int r = right(i);
    int H = A.size();
    int largest = i;
    if (l <= H && A[l] > A[i]) {
        largest = l;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }

}

void buildMaxHeap(vector<int>& A)
{
    for (int i = A.size() / 2; i > 0; i--) {
        maxHeapify(A, i);
    }
}

void print(vector<int>& nums) {
    for (int i = 1; i< nums.size(); i++) {
        cout << " " << nums[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> heaps(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> heaps[i];
    }
    buildMaxHeap(heaps);
    print(heaps);
    return 0;
}