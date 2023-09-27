#include <iostream>
using namespace std;

bool linear_search(int A[], int n, int m) {
    int i = 0;
    A[n] = m;
    while(A[i] != m) {
        i++;
    }
    return i != n;
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
        for (int i = 0; i < n; ++i) {
           if(S[i] == t) {
               count++;
               break;
           }
        }
//        if(linear_search(S, n, t)){
//            count++;
//        }
    }
    cout << count << endl;
    return 0;
}