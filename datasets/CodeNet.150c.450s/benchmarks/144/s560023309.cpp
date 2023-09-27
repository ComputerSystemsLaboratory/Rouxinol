#include<iostream>
using namespace std;

int main(){
    int n, m, l;
    cin >> n >> m >> l;

    int A[101][101] = {};
    int B[101][101] = {};

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= l; j++){
            cin >> B[i][j];
        }
    }

    long long C[101][101] = {};

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= l; j++){
            for (int k = 1; k <= m; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= l; j++){
            if (j == 1)cout << C[i][j];
            else cout << " " << C[i][j];
        }
        cout << endl;
    }

    return 0;
}
