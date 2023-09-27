//
// Created by 李青坪 on 2018/10/26.
//

#include <cstdlib>
#include <cstdio>

using namespace std;

void print(int tree[], int n){
    for (int i = 1; i <= n; ++i) {
        printf("node %d: key = %d, ", i, tree[i]);
        if (i != 1){
            printf("parent key = %d, ", tree[i/2]);
        }
        if (i*2 <= n){
            printf("left key = %d, ", tree[i*2]);
        }
        if (i*2+1 <= n){
            printf("right key = %d, ", tree[i*2+1]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int tree[n+1];
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &tree[i]);
    }
    print(tree, n);
}
/*
5
7 8 1 2 3
 */
