#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, R, p, c;
    while (cin >> N >> R && N) {
        vector <int> A(N,0);
        for (int i = 0; i < N; ++i) A[i] = N - i;
        for (int i = 0; i < R; ++i) {
            cin >> p >> c;
            rotate(A.begin(), A.begin()+p-1,A.begin()+c+p-1);
        }
        cout << A[0] << endl;
    }
    return 0;
}