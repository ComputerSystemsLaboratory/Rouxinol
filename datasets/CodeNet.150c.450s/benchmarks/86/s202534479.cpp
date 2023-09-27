#include <iostream>

using namespace std;

int main()
{
    int n, m, p;
    int num[101];
    while (cin >> n >> m >> p, n|m|p) {
        int total = 0;
        for (int i = 1; i <= n; i++) {
            cin >> num[i];
            total += num[i] * (100-p);
        }
        if (!num[m]) {
            cout << 0 << endl;
            continue;
        }
        cout << (total / num[m]) << endl;
    }
    return 0;
}