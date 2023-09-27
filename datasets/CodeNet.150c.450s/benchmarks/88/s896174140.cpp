#include <bits/stdc++.h>
using namespace std;
#define mk make_pair
int main(){
    int h,w;
    while(cin>>h>>w,h||w){
        pair<int,pair<int,int>> in=mk(w*w+h*h,mk(h,w)),ans=mk(1e9,mk(1e9,1e9)),tmp;
        for(int i=1;i<1000;++i){
            for(int j=i+1;j<1000;++j){
                tmp=mk(i*i+j*j,mk(i,j));
                if(tmp>in){
                    ans=min(ans,tmp);
                }
            }
        }
        cout<<ans.second.first<<" "<<ans.second.second<<endl;
    }
}