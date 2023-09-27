#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
const int N = 1e4 + 5;
int a[N] , n;
 
int main()
{
    cin >> n;
 
    memset(a , 0 , sizeof a);
 
    for(int x = 1; x <= 100; ++x)
        for(int y = 1; y <= 100; ++y)
            for(int z = 1; z <= 100; ++z) {
                long long f = x*x + y*y + z*z + x*y + x*z + y*z;
                if(f <= 10000)
                    a[f]++;
            }
 
    for(int i = 1; i <= n; ++i)
        cout << a[i] << "\n";
 
    return 0;
}