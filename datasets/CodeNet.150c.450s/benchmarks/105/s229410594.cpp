#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct L_B{
    long long d[61],p[61];
    int cnt;
    L_B()
    {
        memset(d,0,sizeof(d));
        memset(p,0,sizeof(p));
        cnt=0;
    }
    bool insert(long long val)
    {
        for (int i=60;i>=0;i--)
            if (val&(1LL<<i))
            {
                if (!d[i])
                {
                    d[i]=val;
                    break;
                }
                val^=d[i];
            }
        return val>0;
    }
}A;

long long a[210];
char s[210];

int main()
{
    int _;
    scanf("%d", &_);
    while(_--) {
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++) scanf("%lld", &a[i]);
        scanf("%s", s);
        int f = 0;
        L_B(A);
        for(int i = n; i >= 1; i--) {
            if(s[i - 1] == '0') A.insert(a[i]);
            else {
                if(A.insert(a[i]) == true) {
                    f = 1;
                    break;
                }
            }
        }
        printf("%d\n", f);
    }
}
