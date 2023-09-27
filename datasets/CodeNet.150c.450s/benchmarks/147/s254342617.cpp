#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll mx=100;

ll arr[100000];


int main(){
    ll x;
    for(ll i=1;i<mx;i++)
        for(ll j=1;j<mx;j++)
            for(ll k=1;k<mx;k++){
                x=(i+j+k)*(i+j+k)-i*j-k*j-i*k;
                if(x<=(ll)1e4)
                    arr[(i+j+k)*(i+j+k)-i*j-k*j-i*k]++;
            }
               
   
    ll k;cin>>k;
    for(int i=1;i<=k;i++){
        cout<<arr[i]<<"\n";
    }
}