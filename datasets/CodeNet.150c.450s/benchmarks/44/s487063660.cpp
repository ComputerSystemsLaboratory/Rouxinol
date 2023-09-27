#include <cstdio>
#include <algorithm>
#include <set>
using namespace std;

int main(){

    int a[4], b, h, bl;
    while(scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]) != EOF) {
        set<int> s;
        h = bl = 0;
        for (int i = 0; i < 4; i++) s.insert(a[i]);
        for (int i = 0; i < 4; i++) {
            scanf("%d", &b);
            if (a[i] == b) h++;
            else if (s.find(b) != s.end()) bl++;
        }
        printf("%d %d\n", h, bl);
    }
    return 0;
}
