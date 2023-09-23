#include <iostream>
using namespace std;

int days(int Y) {
    return Y % 3 ? 195 : 200;
}
int days(int Y, int M) {
    return (Y % 3 && M % 2 == 0) ? 19 : 20;
}
int f(int Y, int M, int D) {
    if (1 < D) return f(Y, M, D-1) - 1;
    if (1 < M) return f(Y, M-1, D) - days(Y, M-1);
    if (Y == 1000) return 0;
    return f(Y+1, M, D) + days(Y);
}
int main() {
    int n, Y, M, D;
    cin >> n;
    while (n--) {
        cin >> Y >> M >> D;
        cout << f(Y, M, D) << endl;
    }
    return 0;
}