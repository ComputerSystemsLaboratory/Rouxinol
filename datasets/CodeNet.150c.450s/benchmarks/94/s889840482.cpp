#include <iostream>
using namespace std;

void bubbleSort(int *a, int n, int &ans) {
    int flag = 1;
    while (flag) {
        flag = 0;
        for (int j = n - 1; 0 < j; --j) {
            if (a[j] < a[j - 1]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
                flag = 1;
                ++ans;
            }
        }
    }
}

int main() {

    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    bubbleSort(a, n, ans);

    int _n = n - 1;
    for (int i = 0; i < n; ++i) {
        if (i != _n) cout << a[i] << " ";
        else cout << a[i] << endl;
    }
    cout << ans << endl;
    return 0;
}