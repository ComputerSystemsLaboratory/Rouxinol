#include <iostream>
using namespace std;

int main() {
    int A[10000], i;
    for (i = 0; i < 10000; i++) {
        cin >> A[i];
        if (A[i] == 0) break;
    }
    for (int j = 0; j < i; j++){
        cout << "Case" << " " << j + 1 << ": " << A[j] << endl;
    }
    return 0;
}