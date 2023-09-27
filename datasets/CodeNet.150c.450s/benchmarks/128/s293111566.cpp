#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    char buf[24];
    scanf("%s", buf);
    string str(buf);

    reverse(str.begin(), str.end());

    printf("%s\n", str.c_str());
    return 0;
}