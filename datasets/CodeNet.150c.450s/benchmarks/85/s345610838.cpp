#include <cstdio>
#include <climits>

int convert(int p, int size, int n){
    for(int i=1;i<size;i++)p+=n--;
    return p;
}

int multipulication(int *r, int *c, int *count, int p, int size, int n){
    if(size==1)return 0;
    int id = convert(p,size,n);
    if(count[id])return count[id];
    int mlt = INT_MAX;
    int i, tmp;
    for(i=1;i<size;i++){
        tmp = r[p]*r[p+i]*c[p+size-1] + multipulication(r,c,count,p,i,n) + multipulication(r,c,count,p+i,size-i,n);
        if(tmp<mlt)mlt=tmp;
    }
    count[id] = mlt;
    return mlt;
}

int main(){
    int i, n;
    scanf("%d",&n);
    int r[n];
    int c[n];
    int count[n*(n+1)/2];
    for(i=0;i<n*(n+1)/2;i++)count[i]=0;
    for(i=0;i<n;i++)scanf("%d %d",r+i,c+i);
    printf("%d\n",multipulication(r,c,count,0,n,n));
    return 0;
}

