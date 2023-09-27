#include <cstdio>

int n,a[50];

int make_up(int i,int v){
    if (v==0)
        return 1;
    if (i>=n)
        return 0;
    int res=make_up(i+1,v)||make_up(i+1,v-a[i]);
    return res;
}

int main() {
    int i,q,value;
    scanf("%d",&n);
    for (i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for (i = 0; i < q; ++i) {
        scanf("%d",&value);
        if (make_up(0,value))
            printf("yes\n");
        else
            printf("no\n");

    }
    return 0;
}