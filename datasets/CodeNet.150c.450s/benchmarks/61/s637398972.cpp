#include <bits/stdc++.h>
using namespace std;
int Y[100];
int main() {
    int N,A,B,C,X;
    while(scanf("%d %d %d %d %d",&N,&A,&B,&C,&X),N) {
        for(int i=0;i<N;i++) {
            scanf("%d",&Y[i]);
        }
        int idx=0;
        bool OK=0;
        for(int i=0;i<=10000;i++) {
            if(X==Y[idx]) idx++;
            if(idx==N) {
                printf("%d\n",i);
                OK=1;
                break;
            }
            X=(A*X+B)%C;
        }
        if(!OK) printf("-1\n");
    }
}