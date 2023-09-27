#include<bits/stdc++.h>
#define N 1000000
using namespace std;

bool prime[N+5];
int C[N+5];

void seive(){
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=4;i<=N;i+=2) prime[i]=false;
    for(int i=3;i<=sqrt(N);i+=2){
        if(prime[i])
            for(int j=i*i;j<=N;j+=2*i)
                prime[j]=false;
    }
    //for(int i=1;i<N;i++) if(prime[i]) cout<<i<<endl;
    int c=0;
    for(int i=1;i<=N;i++){
        if(prime[i]) c++;
        C[i]=c;
        //cout<<C[i]<<endl;
    }
}

int main(){

    seive();
    int x;
    while(scanf("%d",&x)==1)
        printf("%d\n",C[x]);
}