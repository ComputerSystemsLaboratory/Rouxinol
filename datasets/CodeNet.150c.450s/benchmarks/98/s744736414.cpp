#include "bits/stdc++.h"
#include <cassert>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define vi vector<int>
#define pb push_back
#define INF 999999999
//#define INF (1LL<<59)


int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)){
        int i,j;
        if(n==0&&m==0)break;
        
        int a[101],b[101];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<m;i++) scanf("%d",&b[i]);
        
        int sumA=0,sumB=0;
        
        for(i=0;i<n;i++) sumA += a[i];
        for(i=0;i<m;i++) sumB += b[i];
        
        int diff = sumA-sumB;
        
        
        if(abs(diff)%2==1)printf("-1\n");
        else{
            int min_diff = INF;
            int x,y;
            
            for(i=0;i<n;i++){
                for(j=0;j<m;j++){
                    if(a[i]-b[j]==diff/2){
                        
                        if( min_diff>a[i]+b[j] ){
                            min_diff = a[i]+b[j];
                            x = a[i];
                            y = b[j];
                        }
                        
                    }
                }
            }
            if(min_diff==INF)printf("-1\n");
            else printf("%d %d\n",x,y);
        }
    }
}