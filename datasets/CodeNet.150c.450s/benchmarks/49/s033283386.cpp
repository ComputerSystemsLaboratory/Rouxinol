#include<stdio.h>
#include<algorithm>
using namespace std;
int n, w[110], s;
int main(){
    int i;
    while(1){
        scanf("%d",&n);
        if(!n)break;
        for(i=1;i<=n;i++)scanf("%d",&w[i]);
        sort(w+1,w+n+1);
        s=0;
        for(i=2;i<n;i++)s+=w[i];
        s/=(n-2);
        printf("%d\n",s);
    }
}