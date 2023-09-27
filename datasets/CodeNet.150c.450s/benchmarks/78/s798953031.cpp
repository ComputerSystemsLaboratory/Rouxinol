#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> num;
    for(long long int i=1;;i++){
        if(i*(i+1)*(i+2)/6>1e6)
            break;
        num.push_back(i*(i+1)*(i+2)/6);
    }
    vector<int> dp1(1e6+1,1e7);
    vector<int> dp2(1e6+1,1e7);
    dp1[0]=0,dp2[0]=0;
    for(int i=1;i<dp1.size();i++){
        for(int r=0;r<num.size() ;r++){
            if(num[r]>i) break;
            dp1[i]=min(dp1[i],dp1[i-num[r]]+1);
            if(num[r]%2==1){
                dp2[i]=min(dp2[i],dp2[i-num[r]]+1);
            }
        }
    }
    int n;
    while(cin>>n,n){
        cout<<dp1[n]<<" "<<dp2[n]<<endl;
    }
    return 0;
}