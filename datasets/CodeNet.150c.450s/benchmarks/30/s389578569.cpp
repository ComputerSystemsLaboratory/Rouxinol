#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int selectionSort(vector<int>& A) {
    int cnt = 0;
    for (auto i = 0; i < A.size() - 1; i++) {
        int mini = i;
        for (auto j = i; j < A.size(); j++) {
            if (A[j] < A[mini]) {
                mini = j;
            }
        }

        if (i != mini) {
            swap(A[i], A[mini]);
            cnt++;
        }
    }
    return cnt;
}

int main(void) {
    int n;
    cin >> n;

    vector<int> ary(n);
    for (int i = 0; i < n; i++) {
        cin >> ary[i];
    }

    int ans = selectionSort(ary);

    for (int i = 0; i < n; i++) {
        cout << (i ? " " : "") << ary[i];
    }
    cout << endl;
    cout << ans << endl;

    return 0;
}