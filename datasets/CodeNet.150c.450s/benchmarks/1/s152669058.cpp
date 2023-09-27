#include<cstdio>
#include<algorithm>

using namespace std;
typedef long long int lli;

lli map[200000];

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0; i<150000; i++)
        map[i] = 2e9;
    for(int i=0; i<n; i++) {
        lli a;
        scanf("%lld",&a);
        lli *p = lower_bound(map, map+200000, a);
        *p = min(*p, a);
    }
    printf("%d\n", lower_bound(map, map+200000, 2e9)-map);
    return 0;
}