#include <iostream>
#include <vector>

#define MAX_VALUE 10001

void counting_sort(std::vector<int>& a) {
    std::vector<int> c(MAX_VALUE, 0);
    for (int i=0; i<a.size(); i++) {
        c[a[i]]++;
    }
    for (int i=1; i<c.size(); i++) {
        c[i] = c[i] + c[i-1];
    }
    std::vector<int> b(a.size());
    for (int i=0; i<a.size(); i++) {
        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }
    a.swap(b);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    
    counting_sort(a);
    
    for (int i=0; i<n-1; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << a[n-1] << std::endl;
}