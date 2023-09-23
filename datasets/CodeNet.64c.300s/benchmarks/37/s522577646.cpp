#include <iostream>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (!N) { break; }

        int ans = 0, t = 0;

        for (int i = 1; i < N; i++) {
            t = i;
            for (int j = i+1; j < N; j++) {
                t += j;
                if (t == N) {
                    ans++;
                    break;
                }
                else if (t > N) {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
