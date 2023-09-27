#include <cstdio>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    ll res[n][21];
    int nums[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 20; j++) res[i][j] = 0;
    }
    for (int i = 0; i < n; i++) scanf("%lld", &nums[i]);
    res[0][nums[0]] = 1;
    for (int i = 1; i < n-1; i++) {
        for(int j = 0; j <= 20; j++){
            if (j-nums[i] >= 0 && j-nums[i] <= 20) res[i][j] += res[i-1][j-nums[i]];
            if (j+nums[i] >= 0 && j+nums[i] <= 20) res[i][j] += res[i-1][j+nums[i]];
        }
    }
    printf("%lld\n", res[n-2][nums[n-1]]);
    return 0;
}

