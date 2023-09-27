#include<stdio.h>

int make_ans(int n,int x) {
    int a,b,c,total=0;
    for(a=1;a<=n;a++) {
        for(b=a+1;b<=n;b++) {
            for(c=b+1;c<=n;c++) {
                if(a+b+c==x) total++;
            }
        }
    }
    return total;
}

int main() {
    int n,x,i=0,k,limit=100,ans[limit];
    while(1) {
        scanf("%d %d",&n,&x);
        if(n==0 && x==0) break;
        ans[i] = make_ans(n,x);
        i++;
        if(i==limit-1) limit++;
    }
    for(k=0;k<i;k++) {
        printf("%d\n",ans[k]);
    }
    return 0;
}
