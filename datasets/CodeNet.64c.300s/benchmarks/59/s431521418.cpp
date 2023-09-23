#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cmath>
#include <set>
#include <vector>
using namespace std;
int n;
int a;
bool is_prime(int a)
{
    if(a==2) return true;
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0) return false;
    }
    return true;
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int cnt=0;
    while(n--)
    {
        scanf("%d",&a);
        if(is_prime(a)) cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}