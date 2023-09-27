#include <bits/stdc++.h>
using namespace std;
int ar[1000009];
int pr[1000009];
int main()
{
    int i,n,j,k,z=2,te;
    for(i=4;i<=100009;i+=2){
        ar[i]=1;
    }

    pr[3]=1;
    int sq=sqrt(1000000)+3;
    for(i=3;i<=1000009;i+=2){

            if(ar[i]==0){pr[i+1]=z++;}
            if(i<=1000){
                if(ar[i]==0){
                    for(j=i*i;j<=1000009;j+=2*i){
                        ar[j]=1;
                    }
                }
            }
    }
    for(i=0;i<1000009;i++){
        if(pr[i]!=0){
            te=pr[i];
        }
        pr[i]=te;
    }




    while(scanf("%d",&n)==1){
            if(n>1){printf("%d\n",pr[n+1]);}
            else {
                printf("0\n");
            }
    }
    return 0;

}