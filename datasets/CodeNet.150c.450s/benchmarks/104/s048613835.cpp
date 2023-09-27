#include<stdio.h>

int main(){
        int W,N;
        int w[30];

        scanf("%d",&W);
        scanf("%d",&N);

        for(int i=0;i<W;i++){
                w[i]=i+1;
        }

        int a,b,dm;
        for(int i=0;i<N;i++){
                scanf("%d,%d",&a,&b);

                //swap(w[a-1],w[b-1]
                dm = w[a-1];
                w[a-1]=w[b-1];
                w[b-1]=dm;
        }

        for(int i=0;i<W;i++){
                printf("%d\n",w[i]);
        }

        return 0;
}