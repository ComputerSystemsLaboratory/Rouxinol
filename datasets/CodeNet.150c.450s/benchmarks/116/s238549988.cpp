#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    vector<int> ans(0);
    while(1){
        cin>>n>>k;
        if(n==0&&k==0){
            break;
        }
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec.at(i);
        }
        vector<int> rsw(n+1);
        rsw.at(0)=0;
        for(int i=1;i<n+1;i++){
            rsw.at(i) = rsw.at(i-1) + vec.at(i-1);
        }
        int ans =0;
        for(int i=k;i<n+1;i++){
            if(ans < rsw.at(i) - rsw.at(i-k)){
                ans = rsw.at(i) - rsw.at(i-k);
            }
        }
        cout << ans << endl;
    }
    
}
