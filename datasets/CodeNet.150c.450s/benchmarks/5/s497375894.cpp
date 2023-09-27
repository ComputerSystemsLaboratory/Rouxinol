#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        printf("%d%c",a[n-i-1]," \n"[i==n-1]);
    return 0;
}

