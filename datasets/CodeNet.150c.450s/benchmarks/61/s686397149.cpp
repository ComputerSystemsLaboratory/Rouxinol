#include <iostream>
#include <vector>
using namespace std;

int main(void) {

    int N, A, B, C, X;
    while (cin >> N >> A >> B >> C >> X,
           N || A || B || C || X) {

        vector<int> Y(N);
        for (int i = 0; i < N; i++) cin >> Y[i];

        int ans = -1, pos = 0;
        for (int i = 0; i <= 10000; i++) {
            if (X == Y[pos]) {
                pos++;
                if (pos == N) {
                    ans = i;
                    break;
                }
            }
            X = (A*X + B) % C;
        }

        cout << ans << endl;
    }

    return 0;
}