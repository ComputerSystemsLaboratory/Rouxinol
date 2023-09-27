#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[5000],n;
signed main(){
    while(cin>>n,n){
        for(int i=0;i<n;i++)cin>>a[i];
        int ma=LLONG_MIN;
        for(int i=0;i<n;i++){
            int cur=0;
            for(int j=i;j<n;j++){
                cur+=a[j];
                ma=max(ma,cur);
            }
        }
        cout<<ma<<endl;
    }

    return 0;
}