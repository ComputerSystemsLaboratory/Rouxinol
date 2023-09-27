#include <cstdio>
#include <vector>

using namespace std;

bool testcase_ends() {
    vector<int> a(4);
    for (size_t i=0; i<4; ++i)
        if (scanf("%d", &a[i]) == EOF)
            return 1;

    vector<int> b(4);
    for (size_t i=0; i<4; ++i)
        scanf("%d", &b[i]);

    int hit=0, blow=0;
    for (size_t i=0; i<4; ++i)
        for (size_t j=0; j<4; ++j)
            if (a[i] == b[j])
                ++(i==j? hit:blow);

    printf("%d %d\n", hit, blow);
    return 0;
}

int main() {
    int solved=0;
    while (!testcase_ends())
        ++solved;

    return !solved;
}