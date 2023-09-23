#include<iostream>
using namespace std;

int main() {
        int n, A[100], i;
        cin >> n;
        for (i = 1; i <= n; i++) cin >> A[i];
        for (int j = n; j >= 1; j--) {
                if (j < n) cout << " ";
                cout << A[j];
        }
        cout << endl;
}