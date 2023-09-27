#include <stdio.h>
#define N 10010
int n;
int father[N];
int findfather(int x){
    return x == father[x] ? x : findfather(father[x]);
}
void init(){
    for(int i = 0; i < n; i++) father[i] = i;
}
int main(){
    int m;
    scanf("%d %d", &n, &m);
    init();
    for(int i = 0; i < m; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0){
            father[findfather(c)] = findfather(b);
        }
        else{
            printf("%s\n", findfather(b) == findfather(c) ? "1" : "0");
        }
    }
    return 0;
}

