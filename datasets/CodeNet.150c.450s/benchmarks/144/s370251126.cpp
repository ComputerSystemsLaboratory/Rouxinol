#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int i, j, k, n, m, l;

    cin >> n >> m >> l;

    int A[100][100], B[100][100];
    long C[100][100] = {};

    for(i = 0; i < n; ++i){
        for(j = 0; j < m; ++j){
            cin >> A[i][j];
        }
    }

    for(i = 0; i < m; ++i){
        for(j = 0; j < l; ++j){
            cin >> B[i][j];
        }
    }

    for(i = 0; i < n; ++i){
        for(j = 0; j < l; ++j){
            for( k = 0; k < m; ++k ){
                C[i][j] += A[i][k] * B[k][j];
            }
            if ( j == l-1 ) {
                cout << C[i][j] << endl;
            } else {
                cout << C[i][j] << " ";
            }
        }
    }


}