#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int max_r=-1000000000;
    int min_r;
    scanf("%d", &min_r);
    for(int i=1; i<n; i++){
        int r;
        scanf("%d", &r);
        max_r=max(max_r, r-min_r);
        min_r=min(min_r, r);
    }
    printf("%d\n", max_r);
    return 0;
}