#include<cstdio>
#include<cstdlib>
#define MAX 10000

int main(){
        int n;
        int *a, *b, *c;
        scanf("%d", &n);
        a = (int *) malloc(sizeof(int)*n);
        b = (int *) malloc(sizeof(int)*n);
        c = (int *) malloc(sizeof(int)*MAX);
        for(int i=0;i<n;i++) scanf("%d", &a[i]);
        for(int i=0;i<MAX;i++) c[i] = 0;

        for(int i=0;i<n;i++) c[a[i]] += 1;
        for(int i=0;i<MAX-1;i++) c[i+1] += c[i];
        for(int i=n-1;i>=0;i--){
                b[c[a[i]]-1] = a[i];
                c[a[i]] -= 1;
        }

        for(int i=0;i<n;i++)
                if(i<n-1) printf("%d ", b[i]);
                else  printf("%d\n", b[i]);
        return 0;
}
