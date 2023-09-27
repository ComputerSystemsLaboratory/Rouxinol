#include<stdio.h>

int A[20];
int n, q;

bool solve(int p, int t)
{
    if(p == n) return false;
     if(t == 0 || A[p] == t) return true;

    if(A[p] > t) return solve(p + 1, t);
    return solve(p + 1, t) || solve(p + 1, t - A[p]);
}

int main()
{
    int i, m;
    scanf("%d", &n);
    for(i = 0; i < n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);
    for(i = 0; i < q; i++){
        scanf("%d", &m);
        if(solve(0, m)){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}