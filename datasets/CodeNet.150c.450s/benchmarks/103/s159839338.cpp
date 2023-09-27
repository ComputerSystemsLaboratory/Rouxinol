#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, s, cnt, sum;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    while (true) {
        cin >> n >> s;
        if (!n && !s) break;

        int arr[10] = {0};
        for (int i = 0; i < n; i++) { arr[9-i] = 1; }
        cnt = 0;
        do {
            sum = 0;
            for (int i = 0; i < 10; i++) {
                if(arr[i]) { sum += a[i]; }
            }
            if (sum == s) cnt++;
        } while(next_permutation(arr, arr+10));

        cout << cnt << endl;
    }
    return 0;
}