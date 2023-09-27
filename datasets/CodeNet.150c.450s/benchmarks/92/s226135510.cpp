#include <algorithm>
#include <cstdio>
#include <functional>

using namespace std;

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
         a = a + b;
         int i = 0;
         while(a > 0){ a = a / 10; i++; }
         printf("%d\n", i);

    }
    return 0;

}