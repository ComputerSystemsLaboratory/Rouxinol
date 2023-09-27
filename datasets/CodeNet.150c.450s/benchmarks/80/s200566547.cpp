#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int sumA = 0, sumB = 0, input;
    for (int i = 0; i < 4; i++) {
        cin >> input;
        sumA += input;
    }
    for (int i = 0; i < 4; i++) {
        cin >> input;
        sumB += input;
    }
    cout << max(sumA, sumB) << endl;
}