#include <cstdio>
#include <algorithm>

const int inf = 1e9;

using namespace std;

int main()
{
    int e;
    
    while (scanf("%d", &e), e) {
        int mi = inf;

        for (int z = 0; z * z * z <= e; ++z) {
            for (int y = 0; y * y <= e - z * z * z; ++y) {
                mi = min(mi, e - z * z * z - y * y + y + z);
            }
        }

        printf("%d\n", mi);
    }
}