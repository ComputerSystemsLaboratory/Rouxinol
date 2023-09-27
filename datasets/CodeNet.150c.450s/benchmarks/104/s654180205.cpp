#include<cstdio>
#include<iostream>
using namespace std;
int main(){
    int w,n;
    int np[31];
    scanf("%d",&w);
    scanf("%d",&n);
    int cbef,caft;
    for(int i=0;i<31;i++)
        np[i]=i;
    for(int i=0;i<n;i++){
        int sw;
        char gc;
        scanf("%d%c%d",&cbef,&gc,&caft);
        sw=np[cbef],np[cbef]=np[caft],np[caft]=sw;
    }
    for(int i=1;i<w+1;i++)
        printf("%d\n",np[i]);
    return 0;
}