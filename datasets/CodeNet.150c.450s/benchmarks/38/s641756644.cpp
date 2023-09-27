#include <cstdio>
#include <set>

int main() {
    int n;
    scanf("%d", &n);
    
    std::multiset<int> ms;
    int a, b, c;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d %d", &a, &b, &c);
        ms.insert(a);
        ms.insert(b);
        ms.insert(c);

        auto it = ms.begin();
        a = *it++;
        b = *it++;
        c = *it;
        
        printf(a*a + b*b == c*c ? "YES\n" : "NO\n");
        ms.clear();
    }
}