#include<iostream>
using namespace std;

int main(){
    int n, m;

    cin >> n >> m;
    // cout << n << " " << m << endl;

    int A[n][m];
    int B[m];

    // A
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }

    // B
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }

    // 出力 A
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            // cout << " " << A[i][j];
        }
        // cout << endl;
    }
    // 出力 B
    for(int i = 0; i < m; i++){
        // cout << B[i];
        // cout << endl;
    }

    // 計算
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            // cout << " " << A[i][j];
            sum += (A[i][j] * B[j]);
        }
        cout << sum << endl;
    }

    return 0;
}
