//Coin Chaining Problem
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int C[m], T[m][n + 1];
    for(int i = 0; i < m; i++) {
        cin >> C[i];
        T[i][0] = 0;
    }

    sort(C, C + m);

    for(int i = 0; i < m; i++) {
        if(i == 0) {
            for(int j = 1; j < n + 1; j++) {
                T[i][j] = j / C[i];
            }
        }
        else {
            for(int j = 1; j < n + 1; j++) {
                if(j < C[i]) {
                    T[i][j] = T[i - 1][j];
                } else {
                    T[i][j] = min(T[i - 1][j], T[i][j - C[i]] + 1);
                }
            }
        }
    }

    cout << T[m - 1][n] << endl;
}

