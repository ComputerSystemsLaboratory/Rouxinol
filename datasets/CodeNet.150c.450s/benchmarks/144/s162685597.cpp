#include <iostream>
using namespace std;

int main(){
    int n,m,l;
    cin >> n >> m >> l;
    long long A[100][100], B[100][100], C[100][100];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < l; ++j){
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            C[i][j] = 0;
            for(int k = 0; k < m; ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < l; ++j){
            if(j != 0){
                cout << " " << flush;
            }
            cout << C[i][j] << flush;
        }
        cout << endl;
    }

    return 0;
}