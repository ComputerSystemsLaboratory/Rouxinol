#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
    vector<int> a(5);
    for (size_t i=0; i<5; ++i)
        scanf("%d", &a[i]);

    sort(a.begin(), a.end(), greater<int>());

    for (size_t i=0; i<5; ++i)
        printf("%d%c", a[i], i<4? ' ':'\n');

    return 0;
}