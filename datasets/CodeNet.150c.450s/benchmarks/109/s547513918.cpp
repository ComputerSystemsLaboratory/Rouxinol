#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define rep(i, n) for(int i = 0; i < (n); i++)

#define INF 1e9

int main(void)
{
    int n, i, a, b, c, t[200000], Max;

    scanf("%d", &n);
    while(n != 0){
        for(i = 0; i < 200000; i++){
            t[i] = 0;
        }

        for(i = 0; i < n; i++){
            scanf("%d:%d:%d", &a, &b, &c);
            t[a * 3600 + b * 60 + c]++;
            scanf("%d:%d:%d", &a, &b, &c);
            t[a * 3600 + b * 60 + c]--;
        }

        Max = t[i];
        for(i = 1; i < 200000; i++){
            t[i] += t[i - 1];
            if(Max < t[i]){
                Max = t[i];
            }
        }

        printf("%d\n", Max);

        scanf("%d", &n);
    }
}
