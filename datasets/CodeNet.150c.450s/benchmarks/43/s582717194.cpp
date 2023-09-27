#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    while(true) {
        int n; scanf("%d", &n);
        if(n==0) break;
        int a=0,b=0;
        while(n--) {
            int x,y; scanf("%d%d", &x, &y);
            (x>=y?a:b)+=x;
            (x<=y?b:a)+=y;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}