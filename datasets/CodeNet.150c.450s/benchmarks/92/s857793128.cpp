#include <cstdio>
#include <string>

int main() {
    int a, b;
    while(~scanf("%d %d", &a, &b))
      printf("%ld\n", std::to_string(a + b).size());
}