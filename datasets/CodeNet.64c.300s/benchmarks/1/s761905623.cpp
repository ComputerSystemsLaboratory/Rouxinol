#include<iostream>
#include<algorithm>
using namespace std;

int partition(int A[], int p, int r) {
    int i = p;
    for (int j = p; j < r; j++) {
        if (A[j] <= A[r]) {
            swap(A[i++], A[j]);
        }
    }
    swap(A[i], A[r]);
    return i;
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        A[i] = tmp;
    }
    int q = partition(A, 0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        if (i == q) cout << "[";
        cout << A[i];
        if (i == q) cout << "]";
    }
    cout << endl;
    return 0;
}