#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int *S = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> S[i];
    }

    int q;
    cin >> q;
    int *T = new int[q];
    for (int i = 0; i < q; ++i) {
        cin >> T[i];
    }

    int count = 0;
    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < n; ++j) {
            if (S[j] == T[i]) {
                ++count;
                break;
            }
        }
    }

    cout << count << endl;

    delete[] S;
    delete[] T;
    return 0;
}