#include <cstdio>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    int fib[2]={1, 1};
    for (size_t i=0; i<n; ++i)
        swap(fib[0]+=fib[1], fib[1]);

    printf("%d\n", fib[0]);
    return 0;
}