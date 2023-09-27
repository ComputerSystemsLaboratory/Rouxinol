#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,ans,sum;
    while(1){
        cin>>n>>k;
        if(n==0&&k==0){
            return 0;
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a.at(i);
        }
        ans=0;
        for(int i=0;i<k;i++){
            ans+=a.at(i);
        }
        sum=ans;
        for(int i=1;i<n-k;i++){
            sum=sum+a.at(i+k-1)-a.at(i-1);
                ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}

