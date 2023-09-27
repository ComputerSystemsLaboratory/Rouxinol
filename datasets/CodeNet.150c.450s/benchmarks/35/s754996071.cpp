#include<iostream>
#include<climits>
using namespace std;
 
int main(){
    int n,a[5001];
    int ans;
    a[0]=0;
    while(cin>>n&&n){
        ans = INT_MIN;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            a[i] += a[i-1];
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                ans = max(ans,a[j]-a[i-1]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}