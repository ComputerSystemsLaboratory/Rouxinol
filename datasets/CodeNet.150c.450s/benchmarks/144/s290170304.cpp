#include<iostream>
using namespace std;

int main()
{
    int n, m, l, i, j, k;
    int A[100][100];
    int B[100][100];
    long C[100][100];
    
    cin >> n >> m >> l;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            cin >> A[i][j];
        }
        for(k = 0; k < l; k++) C[i][k] = 0;
    }

    for(j = 0; j < m; j++){
        for(k = 0; k < l; k++){
            cin >> B[j][k];
            for(i = 0; i < n; i++){
                C[i][k] = C[i][k] + A[i][j] * B[j][k];
            }
        }
    }

    for(i = 0; i < n; i++){
        for(k = 0; k < l - 1; k++){
            cout << C[i][k] << " ";
        }
        cout << C[i][l - 1] << endl;
    }

    return 0;
}