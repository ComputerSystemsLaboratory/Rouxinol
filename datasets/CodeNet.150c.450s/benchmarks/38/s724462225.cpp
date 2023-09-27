#include <cstdio>
#include <string>

using namespace std;

int main()
{
        int n;
        int len[3];

        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                for (int i = 0; i < 3; i++) {
                        scanf("%d", &len[i]);
                }
                for (int i = 0; i < 2; i++) {
                        if (len[i] > len[i + 1]) {
                                int tmp = len[i];
                                len[i] = len[i + 1];
                                len[i + 1] = tmp;
                        }
                }
                string ans = ((len[0] * len[0] + len[1] * len[1]) == len[2] * len[2])
                                   ? "YES" : "NO";
                printf("%s\n", ans.c_str());
        }

        return 0;
}