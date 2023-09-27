#include <cstdio>
#include <string>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    int score[2]={};
    for (size_t i=0; i<n; ++i) {
        char buf[1<<7];
        scanf("%s", buf);
        string s(buf);

        scanf("%s", buf);
        string t(buf);

        if (s != t) {
            score[s<t] += 3;
        } else {
            ++score[0];
            ++score[1];
        }
    }

    printf("%d %d\n", score[0], score[1]);
    return 0;
}