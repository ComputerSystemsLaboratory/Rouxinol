#include<stdio.h>
#include<string.h>
using namespace std;

int a[2000005],b[2000005],c[2000005];
int max=10001;

void cs(int n){
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++){
        c[a[i]]++;
    }
    for(int i=1;i<max;i++)
        c[i]+=c[i-1];
    for(int i=n-1;i>=0;i--){
       b[c[a[i]]]=a[i];
       c[a[i]]--;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    cs(n);
    for(int i=1;i<=n;i++){
        if(i==1) printf("%d",b[i]);
        else printf(" %d",b[i]);
    }
    printf("\n");
    return 0;
}