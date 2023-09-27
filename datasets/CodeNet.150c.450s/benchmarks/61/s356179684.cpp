#include <iostream>

using namespace std;

int main() {
    while (true) {
        int N, A, B, C, X;
        int Y[101];

        cin >> N >> A >> B >> C >> X;

        if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0) { break; }

        for (int i = 0; i < N; i++) { cin >> Y[i]; }

        int ans = 0, i = 0;

        while (true) {
            if (X == Y[i]) { i++; }
            if (i == N || ans > 10000) { break; }

            X = (A*X + B) % C;
            ans++;
        }
        cout << (ans > 10000 ? -1 : ans) << endl;
    }
    return 0;
}
