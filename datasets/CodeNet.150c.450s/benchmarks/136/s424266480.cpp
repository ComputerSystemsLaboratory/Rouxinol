#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}


int main()
{
    int a, b;
    while(~scanf("%d%d", &a, &b))
    {
        int a1 = max(a, b);
        int b1 = min(a, b);
        int ans1 = gcd(a1, b1);
        long long  ans2 = a / ans1 * b;
        cout<<ans1<<" "<<ans2<<endl;
    }

    return 0;

}