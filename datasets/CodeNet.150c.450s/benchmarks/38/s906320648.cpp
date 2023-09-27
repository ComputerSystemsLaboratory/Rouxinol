#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    size_t N;
    scanf("%zu", &N);

    for (size_t i=0; i<N; ++i) {
        vector<int> a(3);
        for (size_t i=0; i<3; ++i)
            scanf("%d", &a[i]);

        sort(a.begin(), a.end());
        printf("%s\n", (a[0]*a[0]+a[1]*a[1]==a[2]*a[2])? "YES":"NO");
    }

    return 0;
}