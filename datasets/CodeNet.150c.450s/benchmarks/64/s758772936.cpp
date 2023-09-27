#include<stdio.h>

int n,q,a[20],m[200];


bool search(int sum,int i,int m){
    if(i >= n){
        return sum == m;
    }

    return search(sum + a[i],i + 1,m) || search(sum,i + 1,m);
}

int main(void){
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(int i = 0;i < q;i++){
        scanf("%d",&m[i]);
    }

    for(int i = 0;i < q;i++){
        if(search(0,0,m[i]))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}