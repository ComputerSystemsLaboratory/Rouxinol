#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(vec) vec.begin(),vec.end()

using namespace std;

int main(int argc, char const* argv[])
{
    while (1) {
        int N; cin >> N;
        if (!N) break;
        int ans = 0;
        loop (1001, i) loop (1001, j) if (i < j) {
            if (!i || !j) continue;
            if ((i + j) * (j - i + 1) == N * 2) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}