#include <stdio.h>
#include <algorithm>

int main() {
    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(int i=2; i>0; i--) {
        for(int j=0; j<i; j++){
            if(x[j] > x[j+1]) std::swap(x[j], x[j+1]);
        }
    }
    printf("%d %d %d\n", x[0], x[1], x[2]);
}
