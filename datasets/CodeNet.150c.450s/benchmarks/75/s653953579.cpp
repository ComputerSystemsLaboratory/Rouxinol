#include <bits/stdc++.h>
#define rep(i, n) for(i = 0; i < n; i++)
using namespace std;

void maxHeapify(vector<int>& A, int i) {
    int largest;

    int l = i*2;
    int r = i*2+1;
    if (l <= A.size()-1 && A[l] > A[i])
        largest = l;
    else
        largest = i;

    if (r <= A.size()-1 && A[r] > A[largest])
        largest = r;

    if (largest != i) {
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(vector<int>& A) {
    for (int i=(A.size()-1)/2; i>=1; i--)
        maxHeapify(A, i);
}

int main() {
    int h;
    cin >> h;
    vector<int> a(h+1);
    for (int i=1; i<=h; i++)
        cin >> a[i];

    buildMaxHeap(a);

    for (int i=1; i<=h; i++)
        cout << " " << a[i];
    cout << endl;

    return 0;
}

