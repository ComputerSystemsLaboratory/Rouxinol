#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(10001, 0);
    for (int x = 1; x<100; x++) {
        for (int y = 1; y<100; y++) {
            for (int z = 1; z<100; z++) {
                int b = x*x+y*y+z*z+x*y+y*z+z*x;
                if (b < 10001) a[b]++;
            }
        }
    }
    for (int i=1; i<=n; i++) 
        cout << a[i] << '\n';
    return 0;
}