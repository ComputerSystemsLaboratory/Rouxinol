#include <cstdio>
#include <climits>
#define loop_input(fmt,...) while(~scanf(fmt,__VA_ARGS__))
typedef long long ll;

int main() {
    int n;
    loop_input("%d", &n) {
        ll min = LLONG_MAX, max = LLONG_MIN, sum = 0;
        int a;
        while(n-- && ~scanf("%d", &a)) {
            if (min >= a)   min = a;
            if (max <= a)   max = a;
            sum += a;
        }
        printf("%lld %lld %lld\n", min, max, sum);
    }
    return 0;
}
