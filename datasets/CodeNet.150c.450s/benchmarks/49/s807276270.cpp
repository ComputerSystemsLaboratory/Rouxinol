#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    while (cin >> N, N) {
        int a, maxi = 0, mini = 1000, sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> a;
            maxi = max(maxi, a);
            mini = min(mini, a);
            sum += a;
        }
        cout << (sum - maxi - mini) / (N - 2) << endl;
    }
    return 0;
}