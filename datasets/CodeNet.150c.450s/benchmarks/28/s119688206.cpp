#include<stdio.h>
using namespace std;

int n,k;
long long a[200015];

int c(long long p){
    int i=0;

    for(int j=0;j<k;j++){
        long long s=0;
        while(s+a[i]<=p){
            s+=a[i];
            i++;
            if(i==n)
                return n;
        }
    }
    return i;
}

int s(){
    long long left=0;
    long long right=1000000000;
    long long mid;
    while(right-left>1){
        mid=(right+left)/2;
        int v=c(mid);
        if(v>=n) right=mid;
        else left=mid;
    }
    return right;
}

int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("%d\n",s());
    return 0;
}