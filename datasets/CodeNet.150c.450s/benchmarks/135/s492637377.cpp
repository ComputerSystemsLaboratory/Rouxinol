#include <cstdio>
#include <unordered_map>
#define S 1500
using namespace std;
int W[S]={0};
int H[S]={0};

int main(){
    int N,M,h,w,i,j,k,l,c;
    while(1){
        scanf("%d %d",&N,&M);
        if(!N && !M){break;}
        unordered_map<int,int> ww,hh;
        for(i=0;i<S;i++){
            W[i]=0;H[i]=0;
        }
        for(i=0;i<N;i++){
            scanf("%d",&h);
            if(!i){H[i]=h;}
            else{H[i]=H[i-1]+h;}
        }
        for(i=0;i<M;i++){
            scanf("%d",&w);
            if(!i){W[i]=w;}
            else{W[i]=W[i-1]+w;}
        }
        c=0;
        for(i=0;i<M;i++){
            for(j=0;j<=i;j++){
                if(i!=j){
                    auto itr = ww.find(W[i]-W[j]);
                    if(itr!=ww.end()){
                        ww[W[i]-W[j]]++;
                    }
                    else{
                        ww[W[i]-W[j]]=1;
                    }
                }
                else{
                    auto itr = ww.find(W[i]);
                    if(itr!=ww.end()){
                        ww[W[i]]++;
                    }
                    else{
                        ww[W[i]]=1;
                    }
                }
            }
        }

        for(k=0;k<N;k++){
            for(l=0;l<=k;l++){
                if(k!=l){
                    auto itr = hh.find(H[k]-H[l]);
                    if(itr!=hh.end()){
                        hh[H[k]-H[l]]++;
                    }
                    else{
                        hh[H[k]-H[l]]=1;
                    }
                }
                else{
                    auto itr = hh.find(H[k]);
                    if(itr!=hh.end()){
                        hh[H[k]]++;
                    }
                    else{
                        hh[H[k]]=1;
                    }
                }
            }
        }
        for(auto itr=ww.begin();itr!=ww.end();itr++){
            auto r = hh.find(itr->first);
            if(r!=hh.end()){
                c+=(itr->second*r->second);
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
         

