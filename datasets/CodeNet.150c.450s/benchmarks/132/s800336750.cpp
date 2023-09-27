#include <cstdio>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    int t = 0;
    while (true) {
        // if (t == 4) {
        //    break;
        //}
        int n;
        int p;
        scanf("%d %d", &n, &p);

        if (n == 0 && p == 0) {
            break;
        }

        vector<int> v;
        v.resize(n);
        for (auto&& i : v) {
            i = 0;
        }
        int c = p;
        int nn = 0;
        while (true) {
            // printf("c: %d nn: %d\n", c, nn);
            // printf("v %d: ", v.size());
            // for (auto&& i : v) {
            //    printf("%d ", i);
            //}
            // putchar('\n');
            if (c != 0) {
                c -= 1;
                v[nn] += 1;
                if (c == 0) {
                    auto s = accumulate(begin(v), end(v), 0) - v[nn];
                    if (s == 0) {
                        printf("%d\n", nn);
                        break;
                    }
                }
            }
            else {
                if (v[nn] != 0) {
                    c += v[nn];
                    v[nn] = 0;
                }
            }
            nn = (nn + 1) % n;
        }
        ++t;
    }
}