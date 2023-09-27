#include <cstdio>
#include <list>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int h;
        scanf("%d", &h);
        if (h == 0) {
            break;
        }

        vector<vector<int>> v;
        v.resize(h);
        for (auto&& r : v) {
            r.resize(5);
            for (auto i = 0; i < 5; ++i) {
                int x;
                scanf("%d", &x);
                r[i] = x;
            }
        }

        int p = 0;
        bool change = false;
        do {
            // printf("debug\n");
            // for (auto&& r : v) {
            //    for (auto&& i : r) {
            //        printf("%2d ", i);
            //    }
            //    printf("\n");
            //}
            change = false;
            for (auto&& r : v) {
                // 5
                if (r[0] > 0 && r[0] == r[1] && r[1] == r[2] && r[2] == r[3] &&
                    r[3] == r[4]) {
                    p += r[0] * 5;
                    r[0] = r[1] = r[2] = r[3] = r[4] = -1;
                    change = true;
                }
                // 4
                if (r[0] > 0 && r[0] == r[1] && r[1] == r[2] && r[2] == r[3]) {
                    p += r[0] * 4;
                    r[0] = r[1] = r[2] = r[3] = -1;
                    change = true;
                }
                if (r[1] > 0 && r[1] == r[2] && r[2] == r[3] && r[3] == r[4]) {
                    p += r[1] * 4;
                    r[1] = r[2] = r[3] = r[4] = -1;
                    change = true;
                }
                // 3
                if (r[0] > 0 && r[0] == r[1] && r[1] == r[2]) {
                    p += r[0] * 3;
                    r[0] = r[1] = r[2] = -1;
                    change = true;
                }
                if (r[1] > 0 && r[1] == r[2] && r[2] == r[3]) {
                    p += r[1] * 3;
                    r[1] = r[2] = r[3] = -1;
                    change = true;
                }
                if (r[2] > 0 && r[2] == r[3] && r[3] == r[4]) {
                    p += r[2] * 3;
                    r[2] = r[3] = r[4] = -1;
                    change = true;
                }
            }

            for (int i = 0; i < 5; ++i) {
                vector<int> t;
                for (size_t j = 0; j < v.size(); ++j) {
                    if (v[j][i] > 0) {
                        t.push_back(v[j][i]);
                    }
                }
                // printf("t size %d\n", t.size());
                // for (auto&& s : t) {
                //    printf("%d ", s);
                //}
                // putchar('\n');
                for (size_t j = 0; j < t.size(); ++j) {
                    v[h - t.size() + j][i] = t[j];
                }
                for (size_t j = 0; j < h - t.size(); ++j) {
                    v[j][i] = -1;
                }
            }
        } while (change);
        printf("%d\n", p);
    }
}