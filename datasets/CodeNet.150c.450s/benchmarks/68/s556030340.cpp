#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
         if(n==0){
             break;
         }

         int a[1000];
         for(int i=0; i<n; i++){
             cin >> a[i];
         }

         sort(a,a+n);

         int ans=10000000;
         for(int i=1; i<n; i++){
             ans = min(ans,a[i]-a[i-1]);
         }
         cout<<ans<<endl;
    }
    return 0;
}
