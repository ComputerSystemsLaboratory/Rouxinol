#include <iostream>
using namespace std;

bool linear_search(int A[], int n, int key) {
    int i = 0;
    A[n] = key;
    while(A[i] != key) {
        i++;
    }
    return i != n;
}

bool linear_search2(int A[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if(A[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int S[n];
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }
    int q;
    int count = 0;
    cin >> q;
    int t;
    for (int j = 0; j < q; ++j) {
        cin >> t;
        if(linear_search2(S, n, t)){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}