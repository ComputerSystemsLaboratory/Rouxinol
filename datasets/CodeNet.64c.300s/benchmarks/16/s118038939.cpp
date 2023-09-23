#include<iostream>
#include<algorithm>
using namespace std;
static const int MAX = 200000;

int main() {
    int R[MAX], n;

    cin >> n;
    for(int i = 0; i<n; i++) cin >> R[i];

    int result=-1000000001;
    int min = 1000000001;
    int sub = -1000000001;
    for(int i = 0; i<n; i++) {
        if (i>=1) {
            sub = R[i] - min;
        }
        if (R[i]<min) {
            min = R[i];
        }
        if (sub > result) {
            result = sub;
        }
    }

    cout << result << endl;

    return 0;
}
    