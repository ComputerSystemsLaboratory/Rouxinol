#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int min = 1000000;
    int max = -1000000;
    long sum = 0;
    for (int i = 0; i < n; ++i) {
        int j;
        cin >> j;

        if (j < min) {
            min = j;
        }
        if (max < j) {
            max = j;
        }
        sum += j;
    }
    cout << min << " ";
    cout << max << " ";
    cout << sum << endl;
    return 0;
}