#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    while (1)
    {
        cin >> N;
        if (!N) break;
        vector<int> a(N);
        int d;
        int res = 1000000;
        for (int i = 0; i < N; i++) cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 1; i < N; i++) { d = a[i] - a[i - 1]; if (res > d) res = d; }
        cout << res << endl;
    }
    return 0;
}
