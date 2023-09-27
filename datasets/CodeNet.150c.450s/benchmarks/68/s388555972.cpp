#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    while(1){
        cin>>n;
        if(n==0){
        return 0;
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a.at(i);
        }
        sort(a.begin(),a.end());
    
        vector<int> ans(n-1);
        for(int i=0;i<n-1;i++){
            ans.at(i)=a.at(i+1)-a.at(i);
        }
        sort(ans.begin(),ans.end());
        cout<<ans.at(0)<<endl;
    }
}
    
