#include <cstdio>

typedef struct vertex_{
    int found;
    int d;
    int f;
}vertex;

int search(vertex *array, int (*A)[101], int id, int n, int time){
    if(array[id].found)return time;
    array[id].found=1;
    array[id].d=++time;
    for(int i=1;i<=n;i++){
        if(A[id][i])time=search(array,A,i,n,time);
    }
    array[id].f=++time;
    return time;
}

int searchAll(vertex *array, int (*A)[101], int n){
    int time = 0;
    for(int id=1;id<=n;id++)if(!array[id].found)time=search(array,A,id,n,time);
    return time;
}

int main(){
    int i, j, n, u, k, v;
    scanf("%d",&n);
    vertex array[n+1];
    for(i=1;i<=n;i++)array[i].found=0;
    int A[101][101];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            A[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        scanf("%d %d",&u,&k);
        for(j=0;j<k;j++){
            scanf("%d",&v);
            A[u][v]=1;
        }
    }
    int time = searchAll(array, A, n);
    for(i=1;i<=n;i++)printf("%d %d %d\n",i,array[i].d,array[i].f);
    return 0;
}

