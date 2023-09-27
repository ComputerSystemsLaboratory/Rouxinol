#include<iostream>
using namespace std;
#include<stdio.h>

int *S;

int root(int a){ if(S[a] == a) return a; S[a] = root(S[a]); return S[a]; }

bool same(int x, int y){ return root(x) == root(y); }

void unite(int x, int y){ int a = root(x), b = root(y); S[a] = b; }

int main()
{
    int i, n, q;
    scanf("%d %d", &n, &q);

    S = new int [n];
    for(i = 0; i < n; i++) S[i] = i;

    int cmd, x, y;
    while(q){
        scanf("%d %d %d", &cmd, &x, &y);
        if(cmd){ if(same(x, y)){ printf("1\n"); }else{ printf("0\n"); } }
        else{ unite(x, y); }
        q--;
    };
    delete [] S;

    return 0;
}