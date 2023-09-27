#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{   
    int n;
    scanf("%d", &n);
    int cnt[200000];
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        cnt[x]++;
        sum += x;
    }
    int q;
    scanf("%d", &q);
    while(q--) {
        int x , y;
        scanf("%d%d", &x, &y);
        cnt[y] += cnt[x];
        sum += (y-x) * cnt[x];
        cnt[x] = 0;
        printf("%lld\n", sum);
    }
}
