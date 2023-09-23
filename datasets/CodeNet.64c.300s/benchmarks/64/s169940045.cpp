#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <climits>
#include <cmath>
#include <set>
#include <vector>
using namespace std;
int a,b;
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&a,&b);
    printf("%d\n",gcd(a,b));
    return 0;
}