#include <bits/stdc++.h>
using namespace std;
#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))

typedef pair<int,int> pii;
typedef pair<int,pii> P;

int main(){
    int h,w;
    while(cin>>h>>w,h||w){
        P in=make_pair(w*w+h*h,pii(h,w));
        P ans=make_pair(1e9,pii(100000,100000));
        reep(i,1,1000){
            reep(j,i+1,1000){
                P tmp=make_pair(i*i+j*j,pii(i,j));
                if(tmp>in){
                    ans=min(ans,tmp);
                }
            }
        }
        cout<<ans.second.first<<" "<<ans.second.second<<endl;
    }
}