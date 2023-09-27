#include <iostream>
#include <cstdio>
using namespace std;

const int N = 10;

int a[N];

void input()
{
    for (int i = 0; i < N; i ++) {
        scanf("%d", &a[i]);
    }
}

void solve()
{
    bool res = false;
    for (int k = 0; k < (1<<10); k++) {
        int num = 0;
        int i;
        for (i = 0; i < N; i ++) {
            if ( (1 << i)&k ) {
                if (a[i] > num)
                    num = a[i];
                else
                    break;
            }
        }
        if (i < N)
            continue;
        num = 0;
        for (i = 0; i < N; i ++) {
            if ( ((1 << i)&k) == 0 ) {
                if (a[i] > num)
                    num = a[i];
                else
                    break;
            }
        }
        if (i == N) {
            res = true;
            //printf("k=%d\n", k);
            break;
        }
    }
    if (res)
        printf("YES\n");
    else
        printf("NO\n");
}

int main(void)
{
    int t;
    cin >> t;
    while (t--) {
        input();

        solve();
    }

    return 0;
}