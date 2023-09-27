#include<iostream>
#include<vector>
using namespace std;
vector<bool> sieve(int N){
        vector<bool> ps(N+1,true);
        ps[0]=ps[1]=false;

        for(int i=2;i<N;++i){
                if(!ps[i])
                        continue;
                for(int j=i+i;j<N;j+=i)
                        ps[j]=false;
        }
        return ps;
}

int main(){
        vector<bool> primes=sieve(2000000);
        int a,d,n;
        long ans;
        while(1){
            scanf("%d %d %d",&a,&d,&n);
            if(a==0 && d==0 && n==0)
                        break;
                for(int x=a;n;x+=d){
                        if(!primes[x])
                                continue;
                        if(--n==0){
                                printf("%d\n",x);
                                break;
                        }
                }
        }
        return 0;
}