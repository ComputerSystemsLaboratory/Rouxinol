#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)

int H, A[MAX+1];

void maxHeapfi(int i){
    int l = i * 2;
    int r = i * 2 + 1;
    int max = 0;
    int tmp = 0;
    if(l <= H && A[l] > A[i]) max = l;
    else max = i;
    if(r <= H && A[r] > A[max]) max = r;

    if(max != i){
        tmp = A[max];
        A[max] = A[i];
        A[i] = tmp;
        maxHeapfi(max);
    }
}

int extract(){
    int result = A[1];
    A[1] = A[H];
    A[H] = 0;
    H = H - 1;
    maxHeapfi(1);
    return result;
}

void insert(int key){
    A[H + 1] = key;
    H = H + 1;
    int now = H;
    int tmp = 0;
    while(1){
        if(now <= 1){
            break;
        }
        if(A[now] > A[now / 2]){
            tmp = A[now];
            A[now] = A[now / 2];
            A[now / 2] = tmp;
            now = now / 2;
        }else{
            break;
        }
    }
}

int main(){
    int key;
    char com[10];
    while(1){
        scanf("%s", com);
        if ( com[0] == 'e' && com[1] == 'n' ) break;
        if ( com[0] == 'i' ){
            scanf("%d", &key);
            insert(key);
        } else {
            printf("%d\n", extract());
        }
    }

    return 0;
}