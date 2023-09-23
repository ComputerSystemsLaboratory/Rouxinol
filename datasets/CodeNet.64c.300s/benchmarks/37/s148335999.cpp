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
        for (int i = 1; i <= 1000; i++) for (int j = i+1; j < 1000; j++) {
            if ((i + j) * (j - i + 1) == N * 2) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}