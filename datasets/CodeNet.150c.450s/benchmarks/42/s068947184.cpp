#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;
struct point
{
    char s[12];
    long long x;
}a[1000005];

void check(long long n,long long k)
{
    queue <point> q;
    queue <point> t;
    point f;
    long long sum = 0;
    for(int i = 0; i < n; i++)
        q.push(a[i]);
    while(!q.empty())
    {
        f = q.front();
        if(f.x > k)
        {
            f.x -= k;
            sum += k;
            q.push(f);
        }
        else
        {
            sum += f.x;
            f.x = sum;
            t.push(f);
        }
        q.pop();
    }
    for(int i = 0; i < n; i++)
    {
        f = t.front();
        printf("%s %lld\n",f.s,f.x);
        t.pop();
    }
}

int main()
{
    long long n,k;
    while(scanf("%lld%lld",&n,&k) != EOF)
    {
        for(long long i = 0; i < n; i++)
            scanf("%s%lld",a[i].s,&a[i].x);
        check(n,k);
    }
    return 0;
}

