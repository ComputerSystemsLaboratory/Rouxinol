#include <bits/stdc++.h>

std::vector<int> a(1000);
int main() {
    int i, n;
    while(std::cin >> n, n != 0) {
        for(i=0; i<n; ++i) {
            std::cin >> a[i];
        }
        std::sort(a.begin(), a.begin()+n);
        
        int min = INT_MAX;
        for(i=0; i<n-1; ++i) {
            min = std::min(min, a[i+1] - a[i]);
        }
        std::cout << min << std::endl;
    }
}
