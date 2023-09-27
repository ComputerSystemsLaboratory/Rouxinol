#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int R, C, input, tmpSum;
    cin >> R >> C;

    vector<int> lastLine(C+1, 0);
    for(int i=0; i < R; i++) {
        tmpSum = 0;
        for(int j=0; j < C; j++) {
            cin >> input;
            cout << input << " ";
            tmpSum += input;
            lastLine[j] += input;
        }
        cout << tmpSum << endl;
        lastLine[C] += tmpSum;
    }
    for(int i=0; i < C; i++) {
        cout << lastLine[i] << " ";
    }
    cout << lastLine[C] << endl;

    return 0;
}