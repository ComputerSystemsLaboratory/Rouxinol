#include <iostream>
using namespace std;
#include <cstdio>

int main() {
    int n, x;
    while (1) {
        cin >> n >> x;
        if (n == 0 && x == 0) break;

        int num = 0;
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                for (int k = j + 1; k <= n; k++){
                    if (i + j + k == x) num++;
                }
            }
        }
        cout << num << "\n";
    }

    return 0;
}