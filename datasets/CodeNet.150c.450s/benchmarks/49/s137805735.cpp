#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(1){
        int mn=1000000,mx=0;
        int sum=0,a;
        cin>>n;
        if(n==0){break;}
        for(int i=0;i<n;i++){
            cin>>a;
            mx=max(a,mx);
            mn=min(a,mn);
            sum+=a;
        }
        sum-=mx;
        sum-=mn;
        cout<<sum/(n-2)<<endl;
    }
        
    return 0;
    
}

