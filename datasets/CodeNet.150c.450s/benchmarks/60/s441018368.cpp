#include <iostream>
#define N 100

using namespace std;

int main(int argc, char const *argv[]) {
    int n, u, k, v;
    int A[N][N] = {0};

    cin >> n;
    for (int j = 0; j < n; j++){
        cin >> u >> k;
        for (int i = 0; i < k; i++){
            cin >> v;
            A[u-1][v-1] = 1;
        }
    }
    for (int i = 0; i < u; i++){
        for (int j = 0; j < u - 1; j++){
            cout << A[i][j] << ' ';
        }
        cout << A[i][u-1] << endl;
    }
    return 0;
}

