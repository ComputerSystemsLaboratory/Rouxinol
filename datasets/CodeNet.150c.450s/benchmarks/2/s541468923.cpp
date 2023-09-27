#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(vector<int>& A, const int l, const int r) {
    const int pivot = A[r - 1];
    int head = l;
    for(int i = l; i < r; i++) {
        if(A[i]<= pivot) {
            swap(A[head], A[i]);
            head++;
        }
    }
    return head - 1;
}

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int g = partition(A, 0, N);
    for(int i = 0; i <= g; i++) {
        if(i == g) cout << '[' << A[i] << ']';
        else cout << A[i];
        cout << (i == N - 1 ? '\n' : ' ');
    }
    for(int i = g + 1; i < N; i++) {
        cout << A[i];
        cout << (i == N - 1 ? '\n' : ' ');
    }
}