#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,k;
    while(cin >> n >> k, n&k){
        int num[n],total=0;
        for(int i=0;i<n;i++) cin>>num[i];
        for(int i=0;i<k;i++) total+=num[i];
        int ans=total;
        for(int i=0;i<n-k;i++){
            total+=num[i+k]-num[i];
            ans=max(ans,total);
        }
            cout<<ans<<endl;
    }
    return 0;
}