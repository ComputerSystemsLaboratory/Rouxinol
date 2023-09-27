#include <cstdio>
using namespace std;

int n, A[50];

int solve(int i, int m)
{
    if (m == 0){
        return 1;
        }
    if (i >= n ) {
        return 0;
    }
    int res = solve(i+1, m) || solve(i+1, m - A[i]);
    return res;
}

int main(void)
{
    int q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d",&q);
    for (int i = 0; i < q; i++)
    {
        int m;
        scanf("%d", &m);
        int ans = solve(0,m);
        if (ans) 
            printf("yes\n");
        else
            printf("no\n");
    }
    
    return 0; 
}
