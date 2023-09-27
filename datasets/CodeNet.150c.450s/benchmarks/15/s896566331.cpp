#include<cstdio>
#include<algorithm>

typedef long long int lli;
lli s[20000], t[2000];

int main(void) {
    int n,q;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%lld",&s[i]);
    scanf("%d",&q);
    for(int i=0; i<q; i++)
        scanf("%lld",&t[i]);

    std::sort(s, s+n);
    std::sort(t, t+q);

    lli *ps=s, *pt=t;
    int res=0;
    while(ps<s+n && pt<t+q) {
        if(*ps == *pt)
            res++, ps++, pt++;
        else if (*ps < *pt)
            ps++;
        else
            pt++;
    }
    printf("%d\n",res);

    return 0;
}