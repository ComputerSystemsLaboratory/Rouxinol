#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0){
            return 0;
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a.at(i);
        }
        vector<int> b(n+1);
        b.at(0)=0;
        for(int i=1;i<=n;i++){
            b.at(i)=b.at(i-1)+a.at(i-1);
        }
        int ans=b.at(1);
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                ans=max(ans,b.at(i)-b.at(j));
            }
        }
        cout<<ans<<endl;
    }
}
