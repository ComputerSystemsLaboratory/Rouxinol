#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    //cout<<n<<endl;
    int ans=0;
    for(int i=2;i<n;i++){
        if(i%2 && n%i==0 && n/i-(i/2)>0){
            ans++;
        }
        else if((!(i%2)) && (double)n/i-0.5==(double)(n/i) && (double)(n/i)-i/2 >=0){
            ans++;
        }
        
    }
    cout<<ans<<endl;

}


int main(void){
    int n;
    while(cin>>n,n){
        solve(n);
    }
    
}