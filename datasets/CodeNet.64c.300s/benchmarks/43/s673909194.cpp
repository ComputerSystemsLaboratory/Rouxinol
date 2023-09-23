#include <cstdio>
using namespace std;

int a, b, c, d, e, f, g, h;

int main(){
    scanf("%d %d %d %d\n%d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
    if(a + b + c + d <= e + f + g + h){
        printf("%d\n", e + f + g + h);
    }else{
        printf("%d\n", a + b + c + d);
    }
    return 0;
}