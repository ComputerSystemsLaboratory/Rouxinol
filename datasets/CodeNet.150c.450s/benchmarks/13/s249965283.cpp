#include <cstdio>
#include <string>

using namespace std;

int main() {
    char buf[1<<7];
    scanf("%s", buf);
    string s(buf); s+=s;

    scanf("%s", buf);
    string p(buf);

    printf("%s\n", s.find(p)!=string::npos? "Yes":"No");
    return 0;
}