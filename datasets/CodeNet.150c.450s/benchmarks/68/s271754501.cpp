#include <bits/stdc++.h>
using namespace std;

int N;

int main()
{
    while (cin >> N)
    {
        if (N == 0)
            return 0;
        vector<int> A(N);
        int ans = (1 << 30);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        for (int i = 0; i + 1 < N; i++)
        {
            ans = min(ans, A[i + 1] - A[i]);
        }
        cout << ans << endl;
    }
}
