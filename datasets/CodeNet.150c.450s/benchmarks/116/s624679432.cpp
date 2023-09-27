#include<cstdio>                                                                                   
#include<algorithm>                                                                                
using namespace std;                                                                               
                                                                                                   
int N,K,dat[100000];                                                                               
long long r,t;                                                                                     
                                                                                                   
int main(){                                                                                        
    while(scanf("%d%d",&N,&K),N||K){                                                               
        for(int i=0;i<N;i++){                                                                      
            scanf("%d",dat+i);                                                                     
        }                                                                                          
        t=0;                                                                                       
        for(int i=0;i<K;i++){                                                                      
            t+=dat[i];                                                                             
        }                                                                                          
        r=t;                                                                                       
        for(int i=K;i<N;i++){                                                                      
            t=t-dat[i-K]+dat[i];                                                                   
            r=max(r,t);                                                                            
        }                                                                                          
        printf("%lld\n",r);                                                                        
    }                                                                                              
}  