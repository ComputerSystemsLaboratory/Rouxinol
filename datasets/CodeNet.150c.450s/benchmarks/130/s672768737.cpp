#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int N, M, input, tmpSum;
    vector< vector<int> > matrix;
    vector<int> vect;

    cin >> N >> M;
    for(int i=0; i < N; i++) {
        vector<int> tmpVect;
        for(int j=0; j < M; j++) {
            cin >> input;
            tmpVect.push_back(input);
        }
        matrix.push_back(tmpVect);
    }

    for(int i=0; i < M; i++) {
        cin >> input;
        vect.push_back(input);
    }

    for(int i=0; i < N; i++) {
        tmpSum = 0;
        for(int j=0; j < M; j++) {
            tmpSum += vect[j] * matrix[i][j];
        }

        cout << tmpSum << endl;
    }

    return 0;
}