#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2000005
#define INF 2000000010
int n = 0;
int a[N];
void swap(int *a, int *b){
    int t;
    t = *a;
    *a= *b;
    *b = t;
}
void maxHeapify(int i){
    int l = 2*i;
    int r = 2*i+1;
    int maxi = i;
    if(l <= n && a[l] > a[maxi]){
        maxi = l;
    }
    if(r <= n && a[r] > a[maxi]){
        maxi = r;
    }
    if(maxi != i){
        swap(&a[i], &a[maxi]);
        maxHeapify(maxi);
    }
}
void insert(int key){
    a[++n] = key;
    int temp = n;
    while(temp > 1 && a[temp/2] < key){
        swap(&a[temp], &a[temp/2]);
        temp /= 2;
    }
}
int extract(){
    int res = a[1];
    a[1] = a[n--];
    maxHeapify(1);
    return res;
}
int main(){
    char s[10];
    int k;
//    insert (120);
//    insert (88);
//    insert (3);
//    insert (999999999);
//    insert (7);
//    extract();
//    insert (100);
//    insert (21);
//    insert (100);
//    insert (100);
//    insert (10);
//    extract();
//    insert (100);
//    extract();
//    insert (777);
//    insert (100);
//    extract();
//    extract();
//    extract();
//    extract();
//    extract();
//    insert (120);
//    extract();
//    extract();
    while(scanf("%s", s), strcmp(s, "end")){
        if(s[0] == 'i'){
            scanf("%d", &k);
            insert(k);
        }else if(s[0] == 'e'){
            int p = extract();
            printf("%d\n", p);
        }
    }
    return 0;
}
