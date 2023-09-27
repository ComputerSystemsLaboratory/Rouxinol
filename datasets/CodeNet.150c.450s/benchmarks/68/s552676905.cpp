#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
	
 
 
int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll ans = a[1]-a[0];
        for(int i=2;i<n;i++){
            if(ans>a[i]-a[i-1]){
                ans = a[i]-a[i-1];
            }
        }
        cout<<ans<<endl;
    }
}

