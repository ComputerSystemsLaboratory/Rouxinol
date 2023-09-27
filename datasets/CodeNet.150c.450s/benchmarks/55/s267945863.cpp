#include <cstdio>
#include <string>

using namespace std;

int main() {
    while (true) {
        char buf[1<<10];
        scanf("%s", buf);
        string s(buf);
        if (s == "0") return 0;

        int dsum=0;
        for (char c: s)
            dsum += c-'0';

        printf("%d\n", dsum);
    }
}