#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,hr,h,mr,m,s;
    cin>>n;
    hr=n%3600;
    h=n/3600;
    s=hr%60;
    m=hr/60;
    printf ("%lld:%lld:%lld\n",h,m,s);

    return 0;


}

