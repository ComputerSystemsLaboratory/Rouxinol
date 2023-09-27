#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace  std;
int A[2000], n;
int solve (int i,int m)
{
    if(m==0) return 1;
    if(i >=n) return 0;
    int res = solve(i+1,m) || solve(i+1, m-A[i]);
    return res;
}
int main()
{
    
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        cin >>A[i];
    }
    int q;
    cin >>q;
    for(int i = 0;i<q;i++)
    {
        int m;
        cin >>m;
        if(solve(0,m)) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}

