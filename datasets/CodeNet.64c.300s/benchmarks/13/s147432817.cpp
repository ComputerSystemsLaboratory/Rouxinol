#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);
    int ans=1;
    int old=1, older=1;
    for(int i=2; i<=n; i++){
        older=old;
        old=ans;
        ans=(old+older);
    }
    printf("%d\n", ans);
    return 0;
}