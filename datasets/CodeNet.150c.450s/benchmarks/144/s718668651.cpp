#include <iostream>
using namespace std;

int main(){
    int n, m, l, a, b;
    int A[101][101] = {};
    int B[101][101] = {};
    long C[101][101] = {};
    
    cin >> n >> m >> l;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a;
            A[i][j] = a;
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= l; j++){
            cin >> b;
            B[i][j] = b;
        }
    }
    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= m; k++){
                C[j][i] += A[j][k] * B[k][i];
            }
            
        }
    }
   
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= l; j++){
            if( j != 1){
                cout << " ";
            }
            cout << C[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
