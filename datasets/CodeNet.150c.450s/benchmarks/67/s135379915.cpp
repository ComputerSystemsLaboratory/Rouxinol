#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main(void){
    while(1){
        int n;
        cin>>n;
        if(n==0)break;
        vector<int> a(n+1);
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=i;
            a[i]=sum;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(a[j]-a[i]==n)ans++;
            }
        }
        cout<<max(ans-1,0)<<endl;
    }
    return 0;
}

