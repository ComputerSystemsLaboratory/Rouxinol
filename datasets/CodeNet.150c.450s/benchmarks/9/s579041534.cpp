#include <cstdio>
#include <string>

using namespace std;

void sshuffle(string &s, size_t h) {
    // shuffle string; swap s[:h) and s[h:)
    string t=s.substr(0, h), u=s.substr(h);
    s = u + t;
}

int main() {
    while (true) {
        char buf[1<<8];
        scanf("%s", buf);
        string s(buf);
        if (s == "-") return 0;

        size_t m;
        scanf("%zu", &m);
        for (size_t i=0; i<m; ++i) {
            size_t h;
            scanf("%zu", &h);
            sshuffle(s, h);
        }

        printf("%s\n", s.c_str());
    }
}