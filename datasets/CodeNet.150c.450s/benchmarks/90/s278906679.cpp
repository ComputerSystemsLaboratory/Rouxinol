#include <stdio.h>
#include <map>
using namespace std;

int main() {
    map<int, int> cnt;
    int x;
    while (scanf("%d", &x) != EOF) cnt[x]++;
    int m = 0;
    for (map<int, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
        if (m < it->second) m = it->second;
    }
    for (map<int, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
        if (m == it->second) printf("%d\n", it->first);
    }
    return 0;
}