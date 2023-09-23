#include <iostream>
#include <cstring>
using namespace std;
#define N 300
int a[N+1];
int main()
{
    int n; cin >> n;
    memset(a, 0, sizeof(a));
    a[0] = 1;
    for (int i=2; i<=n; ++i) {
        for (int j=0; j<N; ++j) a[j] *= i;
        for (int j=0; j<N; ++j) {
            a[j+1] += a[j] / 10;
            a[j] %= 10;
        }
    }
    int k=N;
    while (a[k] == 0) k--;
    for (int i=k; i>=0; --i) cout << a[i]; cout << endl;
    return 0;
}