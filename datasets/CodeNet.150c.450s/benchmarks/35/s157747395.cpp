#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n==0)break;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=-1000000;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=a[j];
                if(ans<sum)ans=sum;
            }
        }
        cout<<ans<<endl;
    }
}