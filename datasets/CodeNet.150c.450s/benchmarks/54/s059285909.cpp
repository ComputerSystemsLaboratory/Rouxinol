#include <algorithm>
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

bool issame(char a, char b) {
    return toupper(a) == toupper(b);
}

int main(void) {

    string w, line;
    cin >> w;

    int total = 0;
    while (true) {
        cin >> line;
        if (line == "END_OF_TEXT") { break; }
        if (line.size() == w.size()) {
            bool ok = true;
            for (int i = 0; i < w.size(); ++i) {
                if (toupper(w[i]) != toupper(line[i])) {
                    ok = false; break;
                }
            }
            if (ok) { ++total; }
        }
    }

    printf("%d\n", total);

    return 0;
}