// comment
#include <iostream>
using namespace std;
 
int isFinish(int *human, int N) {
    int count = 0;
    int id = -1;
    for (int i = 0; i < N; i++) {
        if (human[i] > 0) {
            id = i; count++;
        }
    }
    if (count == 1) return id;
    else return -1;
}
int main() {
    while (true) {
        int N, P;
        int ans;
        cin >> N >> P;
        if (N == 0 && P == 0) break;
        int human[50] = {0};
        int i = 0;
        while (true) {
            if (P != 0) {
                human[i] += 1;
                P--;
                if (P == 0) {
                    ans = isFinish(human, N);
                    if (ans >= 0) break;
                }
            }
            else {
                P += human[i];
                human[i] = 0;
            }
            i = (i + 1) % N;
        }
        cout << ans << endl;
    }
    return 0;
}
 