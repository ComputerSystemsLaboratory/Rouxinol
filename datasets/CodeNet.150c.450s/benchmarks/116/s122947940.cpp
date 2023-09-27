#include <iostream>
#include <algorithm>
using namespace std;

int main(){
        while(true){
                int n,k;
                cin>>n>>k;

                if(n==0 && k==0){
                        break;
                }

                int a[n],sum=0;
                for(int i=0;i<n;i++){
                        cin>>a[i];
                }
                for(int i=0;i<k;i++){
                        sum+=a[i];
                }

                int ans=sum;
                for(int i=0;i<n-k;i++){
                        sum+=a[i+k]-a[i];
                        ans=max(ans,sum);
                }

                cout<<ans<<endl;
        }

        return 0;
}