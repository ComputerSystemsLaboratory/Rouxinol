#include <iostream>
using namespace std;

int main()
{
    long long A[100][100] { 0 };
    long long B[100][100] { 0 };
    long long C[100][100] { 0 };
    int n, m, l;
    cin >> n >> m >>l;

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<m; ++i){
        for(int j=0; j<l; ++j){
            cin >> B[i][j];
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            for(int k=0; k<l; ++k){
                C[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    for(int i=0; i<n; ++i){
        for(int j=0; j<l; ++j){
            cout << C[i][j];
            if(j!=l-1)
                cout << ' ';

        }
        cout << endl;
    }

    

    return 0;
}

