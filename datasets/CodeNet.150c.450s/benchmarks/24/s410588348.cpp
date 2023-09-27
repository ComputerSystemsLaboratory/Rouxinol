#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;
typedef long long ll;
int main(){
    
    
    
    while(1){
        
        ll n,m;
        
        ll ans;
        vector<pair<int,int>> dp;
        ll sum=0;
        ll dsum=0;
        
        cin>>n>>m;
        
        if(n==0 && m==0){break;}
        
        for(int i=0;i<n;++i){
            int d,p;
            cin>>d>>p;
            dp.push_back(pair<int,int>(d,p));
            sum+=((ll)d)*((ll)p);
            dsum+=d;
        }
        
        sort(dp.begin(),dp.end(),[](const pair<int,int>& a, const pair<int,int>& b)->bool{
            return (a.second > b.second);
        });
        
        if(dsum<=m){
            ans=0;
        }else{
            for(auto& e : dp){
                if(e.first >= m){
                    sum-=e.second * m;
                    break;
                }else{
                    sum-=e.first * e.second;
                    m-=e.first;
                }
            }
            ans=sum;
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}