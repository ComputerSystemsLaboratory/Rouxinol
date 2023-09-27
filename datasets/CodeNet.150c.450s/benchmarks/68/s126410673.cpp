#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int n, arr[1010];
        cin >> n;
        if (n == 0) { break; }
        int ret = 1 << 30;
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        sort(arr, arr+n);
        for (int j = 0; j < n-1; ++j) {
            ret = min(ret, arr[j+1]-arr[j]);
        }
        cout << ret << endl;
    }
    return 0;
}