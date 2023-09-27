#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define rep(i,j,k) for(int i=j;i<k;i++)
int main(void){
    while(1){
    int ans=0,n;
    cin>>n;
    if(n==0)break;
    vector<int> v(n);
    rep(i,0,n)v[i]=i+1;
    
    int right=0,left=0;
    int sum=v[0];
    while(1){
        if(sum<n){
            right++;
            if(right>n-2)break;
            sum+=v[right];
            
        }else if(sum>n){
            sum-=v[left];
            left++;
            if(left>n-2)break;
        }else if(sum==n){
            if(right-left>0)ans++;
            right++;
            if(right>n-2)break;
            sum+=v[right];
            
            
        }
        
    }
    
    cout<<ans<<endl;
    }
}