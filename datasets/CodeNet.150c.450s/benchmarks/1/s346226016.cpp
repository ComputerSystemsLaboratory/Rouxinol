#include <iostream>
#include <algorithm>

int n;
int arr[100010];

int main() {
    std::cin >> n;
    
    for(int i = 0; i < n; ++i)
        arr[i] = 1e+9;
    
    int t, res = 0;
    for(int i = 0; i < n; ++i) {
        std::cin >> t;
        
        auto ptr = std::lower_bound(arr, arr + n, t);
        
        *ptr = t;
        res = std::max<int>(res, ptr - arr + 1);
    }
    
    std::cout << res << std::endl;
}