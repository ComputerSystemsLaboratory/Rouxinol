#include <cstdio>
using namespace std;

int main(){
    int i = 0;
    while(i < 10000){
        int x;
        scanf("%d", &x);
        if(x == 0) break;
        i++;
        printf("Case %d: %d\n", i, x);
    }
    return 0;
}