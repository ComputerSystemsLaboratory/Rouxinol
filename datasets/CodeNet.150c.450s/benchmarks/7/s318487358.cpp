#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[10];

    for(int i=0; i<10; i++)     scanf("%lld", &a[i]);

    sort(a, a+10);

    printf("%lld\n%lld\n%lld\n", a[9],a[8], a[7]);

    return 0;
}