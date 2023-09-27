#include <bits/stdc++.h>
using namespace std;
static const int INF = 2000000000;
static const int NIL = -1;

static const int MAX = 50000;


int main(){
    int n,m;
    int C[21];
    int T[MAX+1];

    scanf("%d %d",&n,&m);

    for(int i=0;i<m;i++) scanf("%d",&C[i]);

    for(int i=0;i<=MAX+1;i++) T[i] = INF;

    //printf("%d\n",T[n]);

    T[0] = 0;

    for(int i=0;i<m;i++){
        for(int k=0;k+C[i]<=n;k++){
            T[k+C[i]] = min(T[k+C[i]],T[k]+1);
        }
    }

    printf("%d\n",T[n]);

    return 0;
}