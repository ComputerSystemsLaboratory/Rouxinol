#include <algorithm>
#include <cstdio>
#include <climits>
#include <vector>
using namespace std;

int chid(char ch) {int ret = ch; if(ret<=0) ret+=256; return ret;}

int main() {
    while(true) {
        int n; scanf("%d\n", &n);
        if(n==0) break;
        static char transl[256];
        for(int i = 0; i < 256; i++) transl[i] = i;
        for(int i = 0; i < n; i++) {
            char x,y; scanf("%c %c\n", &x, &y);
            transl[chid(x)] = y;
        }
        int m; scanf("%d\n", &m);
        for(int i = 0; i < m; i++) {
            char a; scanf("%c\n", &a);
            printf("%c", transl[chid(a)]);
        }
        printf("\n");
    }
    return 0;
}