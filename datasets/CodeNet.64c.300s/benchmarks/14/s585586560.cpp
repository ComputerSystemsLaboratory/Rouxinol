#include<cstdio>

int main() {
    int a,b;
    std::scanf("%d %d",&a,&b);
        if(a < b) {
        std::printf("a < b");
    }
    else if(a > b ) {
        std::printf("a > b");
    }
    else if(a == b){
        std::printf("a == b");
    }
    std::printf("\n");
    return 0;
    }
