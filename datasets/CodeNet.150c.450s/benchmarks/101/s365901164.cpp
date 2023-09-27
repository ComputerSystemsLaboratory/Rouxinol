#include <stdio.h>
#include <string.h>
#define N 100010
int father[N];
int findfather(int x){
    if(x == father[x]) return x;
    else return findfather(father[x]);
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        father[i] = i;
    }
    for(int k = 0; k < m; k++){
        int a, b;
        scanf("%d %d", &a, &b);
        father[findfather(b)] = findfather(a);
    }

//    for(int i = 0; i < n; i++){
//        printf("i = %d father = %d\n", i, father[i]);
//    }
    int q;
    scanf("%d", &q);
    for(int k = 1; k <= q; k++){
        int x, y;
        scanf("%d %d", &x, &y);
        if(findfather(x) == findfather(y)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
