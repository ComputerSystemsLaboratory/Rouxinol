#include <iostream>
using namespace std;

int main() {
    int n,x;
    while (true) {
        int count = 0;
        cin >> n >> x;
        if (n == 0 && x == 0) {
            break;
        }
        int start = n ? n < x : x;
        for (int a = n; a > 2; a--) {
            for (int b = a-1; b > 1; b--) {
                if (a + b > x) {
                    continue;
                }
                for (int c = b-1; c > 0; c--) {
                    int s = a + b + c;
                    if (s == x) {
                        count++;
                        break;
                    } else if (s < x) {
                        break;
                    }
                }
            }
        }
        cout << count << endl;
    }
}