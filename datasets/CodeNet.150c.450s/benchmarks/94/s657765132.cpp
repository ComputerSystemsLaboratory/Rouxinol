#include <iostream>
#include <vector>
#include <utility>              // swap
using namespace std;

int bubbleSort(vector<int>& A) {
    bool flag = true;
    int cnt = 0;                // 交換した回数

    while (flag) {
        flag = false;
        for (auto i = A.size()-1; i >= 1; i--) {
            if (A[i] < A[i-1]) {
                swap(A[i], A[i-1]);
                flag = true;
                cnt++;
            }
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

    int ans = bubbleSort(ary);
    for (auto i = 0; i < ary.size(); i++) {
        cout << (i ? " " : "") << ary[i];
    }
    cout << endl;
    cout << ans << endl;

    return 0;
}