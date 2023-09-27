#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, M, L;
    long tmpSum;
    vector< vector<long> > matrix1;
    vector< vector<long> > matrix2;

    cin >> N >> M >> L;

    for(int i=0; i < N; i++) {
        vector<long> tmpVect1(M, 0);
        for(int j=0; j < M; j++)
            cin >> tmpVect1[j];
        matrix1.push_back(tmpVect1);
    }

    for(int i=0; i < M; i++) {
        vector<long> tmpVect2(L, 0);
        for(int j=0; j < L; j++)
            cin >> tmpVect2[j];
        matrix2.push_back(tmpVect2);
    }

    for(int i=0; i < N; i++) {
        for(int j=0; j < L; j++) {
            tmpSum = 0;
            for(int k=0; k < M; k++) {
                tmpSum += matrix1[i][k] * matrix2[k][j];
            }
            cout << tmpSum << (j == L-1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}