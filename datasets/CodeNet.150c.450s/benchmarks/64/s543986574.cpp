#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100;

int n,q;
int a[maxn],m,num;

bool solve(int i,int m)
{
    bool res;
    if(m == 0) return true;
    if(i >= n) return false;

   // cout << i << " " << m << " " <<res <<endl;
    res = solve(i+1,m) || solve(i+1,m-a[i]);
    return res;
}

int main()
{
    scanf("%d",&n);
    fill(a,a + n, 0);
    for(int i = 0; i < n; ++i) scanf("%d",&a[i]);
    scanf("%d",&q);
    sort(a,a+n);
    for(int i = 0; i < q; ++i){
        scanf("%d",&m);
        if(solve(0,m)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}