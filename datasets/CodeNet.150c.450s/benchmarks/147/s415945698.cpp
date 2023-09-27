#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> res(n + 1, 0);
    for (int i = 1; i * i <= n; i++) {
        for (int j = 1; i * i + j * j <= n; j++) {
            for (int k = 1; i * i + j * j + k * k + i * j + j * k + k * i <= n; k++) {
                res[i * i + j * j + k * k + i * j + j * k + k * i]++;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << res[i] << endl;
    }
}
