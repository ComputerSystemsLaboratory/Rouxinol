#include <iostream>
using namespace std;

int main()
{
    const int kMaxNum = 100;
    int column=1, row=1;
    cin >> column >> row;

    int matrixA[kMaxNum][kMaxNum];
    for (int i=0; i<column; ++i)
    {
        for (int j=0; j<row; ++j)
        {
            cin >> matrixA[i][j];
        }
    }
    int matrixB[kMaxNum];
    for (int i=0; i<row; ++i)
    {
        cin >> matrixB[i];
    }
    
    int answerMatrix[kMaxNum] = {0};
    for (int i=0; i<column; ++i)
    {
        for (int j=0; j<row; ++j)
        {
            answerMatrix[i] += matrixA[i][j] * matrixB[j];
        }
        cout << answerMatrix[i] << endl;
    }
    
    return 0;
}