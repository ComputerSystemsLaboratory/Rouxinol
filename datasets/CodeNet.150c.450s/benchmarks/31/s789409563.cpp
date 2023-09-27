#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> R(N), m(N), M(N);
    for (auto &i : R) cin >> i;
    m[0] = R[0];
    M[N - 1] = R[N - 1];
    for (int i = 1; i < N; i++) m[i] = min(R[i], m[i - 1]);
    for (int i = N - 2; i >= 0; i--) M[i] = max(R[i], M[i + 1]);
    int ans = -1000000000;
    for (int i = 1; i < N; i++) ans = max(M[i] - m[i - 1], ans);
    cout << ans << endl;
    return 0;
}
