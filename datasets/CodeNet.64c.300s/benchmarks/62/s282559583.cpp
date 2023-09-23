#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int c;
            cin >> c;
            A[i][j] = c;
        }
    }
    for (int i = 0; i < m; i++){
        int d;
        cin >> d;
        B[i] = d;
    }
    
    for (int i = 0; i < n; i++){
        int  result = 0;
        for (int j = 0; j < m; j++){
            result += A[i][j] * B[j];
        }
        cout << result << endl;
    }
    return 0;
}

