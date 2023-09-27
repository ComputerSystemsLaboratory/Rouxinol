#include <cstdio>
#include <iostream>

int T;
int input[10];
int B[10], C[10];
int Bcnt, Ccnt;
int flag = 1;

void dfs(int i);
void clear();


int main(void) {
    scanf("%d", &T);
    for (int i = 0; i<T; i++) {
        for (int j = 0; j<10; j++)
            scanf("%d", &input[j]);
        
        dfs(0);
        if (flag) puts("YES");
        else puts("NO");
        clear();
    }
}

void dfs(int i) {
    if (i>9) return;
    
    if (input[i]>B[Bcnt-1]) {
        B[Bcnt++] = input[i];
        dfs(i+1);
    } else if (input[i]>C[Ccnt-1]) {
        C[Ccnt++] = input[i];
        dfs(i+1);
    } else flag = 0;
}

void clear() {
    for (int i = 0; i<10; i++) {
        input[i] = 0;
        B[i] = 0;
        C[i] = 0;
    }
    Bcnt = Ccnt = 0;
}