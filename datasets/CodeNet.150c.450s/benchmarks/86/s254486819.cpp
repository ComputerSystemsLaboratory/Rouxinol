#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int n, m, p;
        cin >> n >> m >> p;
        if ((n | m | p) == 0) {
            break;
        }
        vector<int> x(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> x[i];
            sum += x[i];
        }
        int result = (x[m - 1] > 0) ? sum * (100 - p) / x[m - 1] : 0;
        cout << result << endl;
    }
}