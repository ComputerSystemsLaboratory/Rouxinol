#include <iostream>
using namespace std;


int main () {
    int n;
    cin >> n;

    int R[n];
    for (int i=0; i<n; i++) R[i] = 0;
    for (int i=0; i<n; i++) cin >> R[i];
    int min = R[0];
    int max = -2000000000;
    for (int i=1; i<n; i++) {
        int tmp = R[i] - min;
        if (max < tmp) max = tmp;
        if (R[i] < min) min = R[i];
    }
    cout << max << endl;
    return 0;
}