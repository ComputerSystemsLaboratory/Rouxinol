#include<cstdio>
#include<iostream>

using namespace std;

int n, A[50];

int solve(int i, int m){
    if (m==0) return 1;
    if (i>=n) return 0;
    int res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main(int argc, char const *argv[])
{
    int q, M, i;

    cin >> n;
    for(i=0; i<n; i++) scanf("%d", &A[i]);
    cin >> q;
    for (int i = 0; i < q; ++i){
        scanf("%d", &M);
        if(solve(0,M)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}