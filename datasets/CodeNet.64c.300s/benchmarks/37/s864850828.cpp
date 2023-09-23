#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    while(cin>>n){
        if(n==0) break;
        int ans=0;
        for(int i=1;i<n;i++){
            int a=i;
            int k=0;
            while(k<n){
                k+=a;
                a++;
            }
            if(k==n) ans++;
        }
        cout<<ans<<endl;
    }
    
    
}
