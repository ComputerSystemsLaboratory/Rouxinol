
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> vec(n+1, 0);
    
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            for (int k = 1; k <= 100; ++k) {
                int tmp = pow(i, 2) + pow(j, 2) + pow(k, 2) + i*j + j*k + k*i;
                if (tmp<= 10000) ++vec[tmp];
            }
        }
    }
    
    for (int i = 0; i < n; ++i) cout << vec[i+1] << "\n";
    
    return 0;
    
}
