#include<bits/stdc++.h>
using namespace std;
int w,n;
int num[30];
int main(){
    scanf("%d%d",&w,&n);
    for(int i=0;i<w;i++)num[i]=i;
    while(n--){
        int a,b;
        scanf("%d,%d",&a,&b);
        swap(num[--a],num[--b]);
    }
    for(int i=0;i<w;i++)printf("%d\n",num[i]+1);

    return 0;
}