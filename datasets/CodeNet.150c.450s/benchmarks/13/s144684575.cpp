#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

char s[101], p[101];

int main(void) {

    cin >> s >> p;

    bool ok = false;
    for (int _ = 0,plen = strlen(p),slen = strlen(s); _ < slen; ++_) {
        if (!strncmp(p, s, plen)) {
            ok = true;
            break;
        }
        char s1 = s[0];
        for (int i = 1; i < slen; ++i) {
            s[i-1] = s[i];
        }
        s[slen - 1] = s1;
    }

    printf("%s\n", ok ? "Yes" : "No");

    return 0;
}