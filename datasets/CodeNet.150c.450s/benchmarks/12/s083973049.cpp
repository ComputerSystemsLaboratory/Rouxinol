#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , s[255];
    while(scanf("%d",&n)==1) {
        for(int i=1;i<=n;i++) scanf("%d",&s[i]);
        for(int i=1;i<=n;i++) {
            printf("node %d: key = %d, ",i,s[i]);
            if(i/2) printf("parent key = %d, ",s[i/2]);
            if(i*2<=n) printf("left key = %d, ",s[i*2]);
            if(i*2+1<=n) printf("right key = %d, ",s[i*2+1]);
            printf("\n");
        }
    }
    return 0;
}

