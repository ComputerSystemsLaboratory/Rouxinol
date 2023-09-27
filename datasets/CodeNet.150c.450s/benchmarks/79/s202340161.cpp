#include <iostream>
#include <algorithm>

#define rep(a, b, c) for(int a = b; a < c; a++ )

using namespace std;

int main() {
    while (true) {
        int N, R;
        cin >> N >> R;
        if (N == 0 && R == 0) break;
        int yama[N];
        rep(i, 0, N) {
            yama[i] = N - i;
        }
        rep(i, 0, R) {
            int P, C;
            cin >> P >> C;
            int rem[C];
            rep(j, 0, C) {
                rem[j] = yama[j + P - 1];
            }
            for (int j = P - 2; j >= 0; j--) {
                yama[j + C] = yama[j];
            }
            rep(j, 0, C) {
                yama[j] = rem[j];
            }
        }
        cout << yama[0] << endl;
    }
    return 0;
}