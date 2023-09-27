#include <iostream>
using namespace std;

int main(void) {
    int N, M, L;
    cin >> N >> M >> L;
    long tmpSum, matrix1[N][M], matrix2[M][L];

    for(int i=0; i < N; i++)
        for(int j=0; j < M; j++)
            cin >> matrix1[i][j];

    for(int i=0; i < M; i++)
        for(int j=0; j < L; j++)
            cin >> matrix2[i][j];

    for(int i=0; i < N; i++) {
        for(int j=0; j < L; j++) {
            tmpSum = 0;
            for(int k=0; k < M; k++)
                tmpSum += matrix1[i][k] * matrix2[k][j];
            cout << tmpSum << (j == L-1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}