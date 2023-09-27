#include <cstdio>

void calc(int from, int now_sum, int deep);

int n, s;
int ans;

int main(void)
{
    while (1){
        ans = 0;
        scanf("%d %d", &n, &s);
        if (n == 0 && s == 0) break;
        for (int i = 0; i < 10; i++){
            calc(i, i, n - 1);
        }
        printf("%d\n", ans);
    }
    
}

void calc(int from, int now_sum, int deep)
{
    if (deep == 0){
        if (now_sum == s){
            ans++;
        }
        return;
    }
    
    for (int i = from + 1; i < 10; i++){
        calc(i,  now_sum + i, deep - 1);
    }
}