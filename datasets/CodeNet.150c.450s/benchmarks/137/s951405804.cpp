#include <cstdio>
#include <string>
#include <set>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    set<string> s;
    for (size_t i=0; i<n; ++i) {
        char buf[1<<4];
        scanf("%s", buf);
        string instr(buf);

        scanf("%s", buf);
        string str(buf);

        if (instr == "insert") {
            s.insert(str);
        } else if (instr == "find") {
            printf("%s\n", s.count(str)? "yes":"no");
        }
    }

    return 0;
}