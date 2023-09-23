#include <cstdio>

int n;
bool num[31];

int main(){
    for(int i = 0; i < 28; i++){
        scanf("%d", &n);
        num[n] = true;
    }
    for(int i = 1; i <= 30; i++){
        if(!num[i]) printf("%d\n", i);
    }
}