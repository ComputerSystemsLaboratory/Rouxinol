#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; ++i) cin >> a[i];
    sort(a,a+5,greater<int>());
    for (int i = 0; i < 5; ++i) printf(i == 4 ? "%d\n" : "%d ", a[i]);
}