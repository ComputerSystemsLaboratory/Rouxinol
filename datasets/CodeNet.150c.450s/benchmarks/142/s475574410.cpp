#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
ll n,k;
ll a[200005];
int main(void){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>=k){
            if(a[i]>a[i-k]){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    
}
