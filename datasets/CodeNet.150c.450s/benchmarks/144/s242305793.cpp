#include <iostream>
using namespace std;
int main(void){
    int n, m, l;
    cin >> n >> m >> l;
    
    //??????A?????\???????????????
    int A[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    
    //??????B?????\???????????????
    int B[m][l];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> B[i][j];
        }
    }
    
    //A*B=C??¨?????????????????????C????¨????
    long C[n][l];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            C[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    //??????
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            if(j!=0) std::cout << " ";
            cout << C[i][j];
        }
        std::cout << std::endl;
    }
    
}