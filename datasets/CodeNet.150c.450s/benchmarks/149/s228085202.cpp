#include <iostream>
#include <stdio.h>
using namespace std;
const int MAXN=1000005;
int padres[MAXN],i,n,q,op,x,y;
int findSet(int i){ if (padres[i] == i) return i; else return padres[i] = findSet(padres[i]); }
bool isSameSet(int i, int j){ return (findSet(i) == findSet(j)); }
void unionSet(int i, int j){ padres[findSet(i)] = findSet(j); }
void initSet(int N){ for(int i=0; i<N; i++){ padres[i] = i;}}
int main()
{
    scanf("%d%d",&n,&q);
    initSet(n);
    for (int i=0; i<q; i++){
        scanf("%d%d%d",&op,&x,&y);
        if (op==0){
            unionSet(x,y);
        }else{
            if (isSameSet(x,y)) printf("1\n");
            else printf("0\n");
        }

    }
    return 0;
}