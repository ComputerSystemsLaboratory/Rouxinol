#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;


int main(void){
    long long int N,M;
    while(1){
        scanf("%lld %lld",&N,&M);
        if(N==0&&M==0)break;
        else{
            vector<pair<long long int,long long int> > buri;
            for(int i=0;i<N;i++){
                long long int a,b;
                scanf("%lld %lld",&a,&b);
                buri.push_back(make_pair(b,a));
            }
                sort(buri.begin(),buri.end());
                long long int ans=0;
                while(!buri.empty()){
                    if(buri[N-1].second<M){
                        M-=buri[N-1].second;
                        buri.pop_back();
                        N--;
                        
                    }
                    else {
                        ans+=(buri[N-1].second-M)*buri[N-1].first;
                        buri.pop_back();
break;
                    }
                }
                for(int i=0;i<buri.size();i++)ans+=buri[i].first*buri[i].second;
                printf("%lld\n",ans);
            
        }
    }
    return 0;
}

