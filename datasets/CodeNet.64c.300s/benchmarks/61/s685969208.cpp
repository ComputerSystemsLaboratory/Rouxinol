#include <iostream>
using namespace std;
#include <cstdio>

int main() {
    int r, c;
    cin >> r >> c;
    int A[r+1][c+1];
    int sumi[c+1], sumj;
    for (int i = 0; i < r+1; i++){
        for (int j = 0; j < c+1; j++){
            sumi[j] = 0;
            A[i][j] = 0;
        }

    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < r + 1; i++){
        if (i < r){
            sumj = 0;
            for (int j = 0; j < c + 1; j++){
                if (j < c) sumj += A[i][j];
                else A[i][j] = sumj;
                sumi[j] += A[i][j];
            }
        }
        else{
            for (int j = 0; j < c + 1; j++){
                A[i][j] = sumi[j];
            }
        }

    }

    for (int i = 0; i < r+1; i++){
        for (int j = 0; j < c+1; j++){
            if (j < c) cout << A[i][j] << " ";
            else cout << A[i][j];

        }
        cout << "\n";
    }

    return 0;
}