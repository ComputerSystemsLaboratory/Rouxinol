#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N,M,L;
    cin >> N >> M >> L;
    long long int A[N][M], B[M][L], C[N][L];

    int n, m ,l;
    for ( n =0; n < N; n++){
        for ( m = 0; m < M; m++){
            cin >> A[n][m];
        }
    }

    for ( m =0; m < M; m++){
        for ( l = 0; l < L; l++){
            cin >> B[m][l];
        }
    }
    long long int sum =0;
    for ( n =0; n < N; n++){
        for ( l = 0; l < L; l++){
            sum=0;
            for ( m = 0; m < M; m++){
                sum += A[n][m]*B[m][l];
            }
            cout << sum ;
            if (l != L-1){
                cout<< " ";
            }
        }
        cout << endl;
    }

    return 0;
}
