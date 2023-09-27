#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int count = 0, start = 1, end = start + 1, sum = (n > 2) ? start + end : 0;
        while (sum > 0) {
            if (sum < n && end * 2 <= n) {
                sum += ++end;
            } else {
                if (sum == n) {
                    count++;
                }
                sum -= start++;
            }
        }
        cout << count << endl;
    }
}