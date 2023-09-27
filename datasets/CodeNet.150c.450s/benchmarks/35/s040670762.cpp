#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int do_stuff(int n)
{
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int max_so_far = 0;
    int max_ending_here = 0;

    for (int i = 0; i < n; ++i) {
        int curr = a[i];
        max_ending_here = max(max_ending_here + curr, 0);
        max_so_far = max(max_so_far, max_ending_here);
    }

    if (max_so_far == 0) {
        max_so_far = *max_element(a.begin(), a.end());
    }
    return max_so_far;
}

int main(int argc, char* argv[])
{
    //freopen("input.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    while (n != 0) {
        int ans = do_stuff(n);
        printf("%d\n", ans);
        scanf("%d", &n);
    }
    return 0;
}