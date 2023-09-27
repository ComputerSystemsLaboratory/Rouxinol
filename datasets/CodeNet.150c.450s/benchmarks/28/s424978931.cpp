#include <iostream>
#include <string.h>
using namespace std;
typedef long long int  ll;
int n,k;

ll t[100000];
//pは0～100000*10000の間にある。
int check(ll p){
	int i=0;
    for(int j=0;j<k;j++){
    	ll s=0;
        while(s+t[i]<=p){
        	s+=t[i];
        
        i++;
        if(i==n) return n;
        }
    }    
    return i;
}

int solve(){
	ll left=0;
    ll right=100000*10000;
    ll mid;
    while(right - left>1){
    	mid =(left+right)/2;
        int v=check(mid);
        if(v>=n)right=mid;
        else left=mid;
    }
    return right;
}


int main() {
	cin>>n>>k;
  	for(int i=0;i<n;i++){
    	cin>>t[i];
    }
    ll ans=solve();
    cout<<ans<<endl;
}

