#include <cstdio>
using namespace std;
int main(void){
    // Here your code !
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && b < c){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}