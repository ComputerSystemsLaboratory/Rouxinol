#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> P;
#define mk make_pair
int main(){
    int h,w;
    while(cin>>h>>w,h||w){
        P in=mk(w*w+h*h,pii(h,w));
        P ans=mk(1e9,pii(1e9,1e9));
        for(int i=1;i<1000;++i){
            for(int j=i+1;j<1000;++j){
                P tmp=mk(i*i+j*j,pii(i,j));
                if(tmp>in){
                    ans=min(ans,tmp);
                }
            }
        }
        cout<<ans.second.first<<" "<<ans.second.second<<endl;
    }
}