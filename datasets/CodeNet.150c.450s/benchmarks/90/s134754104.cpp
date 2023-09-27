#include <bits/stdc++.h>

using namespace std;

int a[101];

int main()
{
    int n;
    while(cin>>n) a[n]++;
    int ma = 0;
    for (int i = 1; i <= 100; ++i) ma = max(ma, a[i]);
    for (int i = 1; i <= 100; ++i) if (a[i]==ma) cout<<i<<endl;
}