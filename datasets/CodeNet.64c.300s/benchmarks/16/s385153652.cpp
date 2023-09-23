#include <iostream>
using namespace std;
int main() {
     int R[200000],n;
     cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> R[i];
    }

    int maxvalue = -2000000000;
    int minvalue = R[0];

    for (int i = 1; i < n ; ++i) {
        maxvalue = max(maxvalue, R[i] - minvalue);
        minvalue = min(minvalue, R[i]);
    }

    cout << maxvalue << endl;
    return 0;
}