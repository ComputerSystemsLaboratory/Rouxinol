#include <iostream>
using namespace std;
bool check(int count, int N);
int main() {
    while (true) {
        int N;
        cin >> N;
        if (N == 0)return 0;
        int ans=0;
        for (int count = 2; count < N; count++) {
            if (check(count, N))ans++;
        }
        cout << ans << endl;
    }
}
bool check(int count,int N) {
    int med2 = N * 2 / count;
    int begin = (med2 - count+1) / 2;
    return begin > 0 && (begin+begin+count-1)*count == N * 2;
}