#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<cstring>
#include<string>
#include<cctype>
#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
const int maxn = 100 + 8;

int a,b,c;
int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b,a%b);
}

int main()
{
    scanf("%d%d", &a, &b);
    int c;
    c = gcd(a,b);
    printf("%d\n",c);
    return 0;
}