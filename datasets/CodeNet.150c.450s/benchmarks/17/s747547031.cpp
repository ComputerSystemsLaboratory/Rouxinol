#include <cstdio>
#include <set>
#include <utility>

int main() {
    std::multiset<int> s;
    
    int a;
    while (~scanf("%d", &a)) {
       s.insert(a);
    }
    for (auto i = s.rbegin(); i != s.rend(); ++i) {
        printf("%d%c", *i, std::next(i) != s.rend() ? ' ' : '\n');
    }
}