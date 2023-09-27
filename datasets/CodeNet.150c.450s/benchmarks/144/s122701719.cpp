//$g++ main.cpp - compile
//$./a.out - run
#include <iostream>
#include <string>
using namespace std;

int main(){
    int size = 100+1;
    long matrixA[size][size];
    long matrixB[size][size];
    long matrixC[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrixA[i][j] = 0;
            matrixB[i][j] = 0;
            matrixC[i][j] = 0;
        }
    }
    int n, m, l;
    cin >> n >> m >> l;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrixA[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < l; j++){
            cin >> matrixB[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < m; k++){
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < l; j++){
            if(j != 0) cout << " ";
            cout << matrixC[i][j];
        }
        cout << endl;
    }
}