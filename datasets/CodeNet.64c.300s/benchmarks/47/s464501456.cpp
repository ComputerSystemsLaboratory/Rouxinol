#include <cstdio>

using namespace std;

int main() {
    int n[101]={};

    int mode=0;
    while (true) {
        int a;
        if (scanf("%d", &a) == EOF)
            break;

        ++n[a];
        if (mode < n[a])
            mode = n[a];
    }

    for (size_t i=1; i<=100; ++i)
        if (n[i] == mode)
            printf("%zd\n", i);

    return 0;
}