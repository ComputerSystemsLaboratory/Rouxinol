#include<cstdio>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>
 
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1001001001
#define LLINF 1001001001001001001
#define mp make_pair
#define LLIandI pair<long long int , int>
#define ll long long

//N,M<=1500

int main(){
    while(1){
        int N,M;
        scanf("%d %d",&N,&M);
        if(N==0)break;
        int h[1500];h[0]=0;
        int w[1500];w[0]=0;
        vector<int> hc;
        vector<int> wc;
        rep(i,N){
            scanf("%d",&h[i+1]);
            h[i+1]+=h[i];
            rep(j,i+1){
                hc.push_back(abs(h[i+1]-h[j]));
            }
        }
        rep(i,M){
            scanf("%d",&w[i+1]);
            w[i+1]+=w[i];
            rep(j,i+1){
                wc.push_back(abs(w[i+1]-w[j]));
            }
        }
        sort(hc.begin(),hc.end());
        sort(wc.begin(),wc.end());
        int ans=0;
        int counter=0;
        int hcounter=0;
        for(int i=0;i<hc.size();i++){
            hcounter=1;
            while(i<hc.size()-1){
                if(hc[i]==hc[i+1]){
                    hcounter++;
                    
                    i++;
                }else{
                    break;
                }
            }
            while(counter<wc.size()){
                if(hc[i]<wc[counter]){
                    break;
                }else if(hc[i]==wc[counter]){
                    ans+=hcounter;
                    counter++;
                }else{
                    counter++;
                }
            }
        }
        printf("%d\n",ans);
    }
}
